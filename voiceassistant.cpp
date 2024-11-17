#include "voiceassistant.h"


VoiceAssistant::VoiceAssistant(QObject *parent)
    : QObject{parent}
{


}

QString VoiceAssistant::CallScript()
{
    m_Script = new QProcess(this);
    //m_Script->setWorkingDirectory("/home/saidmagdy/Desktop/gitHub/Alexa_Prototype/");
    QString program = "python3";
    QStringList arguments;
    arguments << "Voice_Assistant.py";
    m_Script->start(program, arguments);
    emit VoiceAssistant::setrunning(true);

    connect(m_Script, &QProcess::readyReadStandardOutput, this, [this]() {
        QString output = QString::fromUtf8(m_Script->readAllStandardOutput());
        output = output.replace("Listening..."," ");
        output = output.replace("Recognizing..."," ");
        emit VoiceAssistant::setresponse(output);
        qDebug() << "output:" << output;
    });



    connect(m_Script, &QProcess::readyReadStandardError, this, [this]() {
        QString error = QString::fromUtf8(m_Script->readAllStandardError());
        qDebug() << "Error:" << error;
    });

    connect(m_Script, QOverload<int, QProcess::ExitStatus>::of(&QProcess::finished),
            this, [this](int exitCode, QProcess::ExitStatus exitStatus) {
                qDebug() << "Process finished with exit code:" << exitCode << "and exit status:" << exitStatus;
                emit VoiceAssistant::setrunning(false);
                emit killProcess();
            });
    qDebug() << m_Script->processId();
    return " ";
}

void VoiceAssistant::killProcess()
{
    if (m_Script && m_Script->state() == QProcess::Running) {
        m_Script->kill();
        qDebug() << "Process Killed" << m_Script;
    }
}



bool VoiceAssistant::running() const
{
    return m_running;
}

void VoiceAssistant::setrunning(bool newRunning)
{
    if (m_running == newRunning)
        return;
    m_running = newRunning;
    emit runningChanged();
}

QString VoiceAssistant::response() const
{
    return m_response;
}

void VoiceAssistant::setresponse(const QString &newResponse)
{
    if (m_response == newResponse)
        return;
    m_response = newResponse;
    emit responseChanged();
}
