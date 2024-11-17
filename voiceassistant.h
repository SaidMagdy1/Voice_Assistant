#ifndef VOICEASSISTANT_H
#define VOICEASSISTANT_H

#include <QObject>
#include <QProcess>
#include <QDebug>

class VoiceAssistant : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool running READ running WRITE setrunning NOTIFY runningChanged FINAL)
    Q_PROPERTY(QString response READ response WRITE setResponse NOTIFY responseChanged FINAL)
public:
    explicit VoiceAssistant(QObject *parent = nullptr);
    Q_INVOKABLE QString CallScript();
    Q_INVOKABLE void killProcess();

    Q_INVOKABLE bool running() const;
    void setrunning(bool newRunning);

    Q_INVOKABLE QString response() const;
    void setresponse(const QString &newResponse);

signals:
    void killedChanged();

    void runningChanged();

    void responseChanged();

private:
    QProcess* m_Script=nullptr ;
    bool m_running=false;
    QString m_response="waiting..";
};



#endif // VOICEASSISTANT_H
