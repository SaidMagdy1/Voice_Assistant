import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls
import QtQuick.Layouts

Window {
    width: 1500
    height: 1000
    visible: true
    title: qsTr("Voice Assistant")
    color: "black"
    property bool iconStatus: false


    Rectangle{
        id: mainBG
        width: 400
        height: 800
        anchors.centerIn: parent
        radius:50
        gradient: Gradient{
            GradientStop{position: 0.0;color:"red"}
            GradientStop{position: 0.3;color:"pink"}
            GradientStop{position: 1.0;color:"black"}
        }

        Image {
            id: speackIcon
            //height:mainBG.height
            anchors{
            bottom:mainBG.bottom
            bottomMargin:(mainBG.height/5)
            horizontalCenter: mainBG.horizontalCenter
            }
            source: VA.running  ? "qrc:/assets/XIcon.png":"qrc:/assets/micIcon.png"
            fillMode: Image.PreserveAspectFit
            scale:iconArea.containsMouse ? 1.1 : 1
            MouseArea{
                id:iconArea
                anchors.fill: parent
                onClicked:{  
                    iconStatus = !iconStatus

                    if(iconStatus)
                        VA.CallScript()
                    else
                        VA.killProcess()
                }
            }
            SequentialAnimation{
                running:true
                loops: Animation.Infinite
                NumberAnimation{
                    target: speackIcon
                    property: "scale"
                    from: 1
                    to:1.2
                    duration: 500
                }
                NumberAnimation{
                    target: speackIcon
                    property: "scale"
                    from: 1.2
                    to:1
                    duration: 500
                }
            }
        }
        Image{
            id: equalizer
            anchors.verticalCenter: mainBG.verticalCenter
            anchors.verticalCenterOffset: -50
            width: 350
            height:VA.running ? 200 : 20
            Behavior on height { NumberAnimation { duration: 500 }}
            // Apply RotationAnimation to the x-axis rotation
            transformOrigin: Item.Center

            // Apply rotation around the x-axis
            transform: Rotation {
                id: xRotation
               origin {
                    y:(equalizer.height/2)+30
                    x:175
               }
                axis { x: 1; y: 0; z: 0 }
                angle: 0
            }
            RotationAnimation {
                id: xRotationAnimation
                target: xRotation
                properties: "angle"
                from: 0
                to: 360
                duration: 1000
                loops: Animation.Infinite
                running: VA.running
            }


            anchors{
                horizontalCenter: speackIcon.horizontalCenter
            }
            //fillMode: Image.PreserveAspectFit
            source:"qrc:/assets/equa.png"
            visible:true
        }
        // AnimatedImage{
        //     id: equalizer
        //     width: 400
        //     anchors{
        //         bottom:speackIcon.top
        //         bottomMargin: 130
        //         horizontalCenter: speackIcon.horizontalCenter
        //     }
        //     fillMode: Image.PreserveAspectFit
        //     source:"qrc:/assets/LCPT.gif"
        //     visible: VA.running
        // }
    }

    Rectangle {
        id: introRect
        anchors{
            top:mainBG.top
            right: mainBG.left
            rightMargin: 50
        }

        width: mainBG.width
        height: mainBG.height
        gradient: Gradient{
            GradientStop{position: 0.0;color:"#f8f0f7"}
            GradientStop{position: 0.5;color:"pink"}
            GradientStop{position: 1.0;color:"black"}
        }
        radius:50

        Column {
            anchors.fill: parent
            anchors.margins: 20
            spacing: 10

            Text {

                width: parent.width
                text: "Welcome to
  Om-Ahmed your Voice Assistant.."
                font.family: "Roboto"
                font.bold: true
                font.pixelSize: 30
                color: "#e75480"
                wrapMode: Text.WordWrap

            }

            Text {
                width: parent.width
                text: "Your personal AI companion is here To assist you with      a wide range of tasks this is an arabic prototype.             Simply speak and let me
handle the rest.

Here some KeyWords to get a clear answer,
..
ما هو,ما هي,ابحثي عن,كلميني عن,من هو,شغلي,افتحي
..."
                font.family: "Roboto"
                font.pixelSize: 25
                color: "#a53860"
                wrapMode: Text.WordWrap
            }
        }
    }
    Rectangle {
        id: responseRect
        anchors{
            top:mainBG.top
            left: mainBG.right
            leftMargin: 50
        }

        width: mainBG.width
        height: mainBG.height
        gradient: Gradient{
            GradientStop{position: 0.0;color:"#f8f0f7"}
            GradientStop{position: 0.5;color:"pink"}
            GradientStop{position: 1.0;color:"black"}
        }
        radius:50

        Column {
            anchors.fill: parent
            anchors.margins: 20
            spacing: 10

            Text {
                y:20
                width: parent.width
                text: "Om-Ahmed Response..."
                font.family: "Roboto"
                font.bold: true
                font.pixelSize: 29
                color: "#e75480"
                wrapMode: Text.WrapAnywhere

            }
            Rectangle{
                x:10
                width: parent.width-20
                height: parent.height-70
                gradient: Gradient{
                    GradientStop{position: 0.0;color:"#f8f0f7"}
                    GradientStop{position: 0.5;color:"pink"}
                    GradientStop{position: 1.0;color:"black"}
                }
                radius: 15
                Text {
                    x:10 ; y:30
                    width: parent.width-20
                    text: VA.response
                    font.family: "Roboto"
                    font.pixelSize: 18
                    color: "#a53860"
                    wrapMode: Text.WordWrap
                }
            }
        }
    }
}
