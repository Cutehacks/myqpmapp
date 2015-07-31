import QtQuick 2.4
import QtQuick.Controls 1.3
import QtQuick.Window 2.2

import cutehacks 1.0 as Stuff
import com.improvide 1.0 as Bar

ApplicationWindow {
    title: qsTr("Hello World")
    width: 640
    height: 480
    visible: true

    Stuff.Button {
        anchors.centerIn: parent
    }

    Bar.Switch {

    }

}
