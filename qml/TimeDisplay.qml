import Qt 4.7

Image {
    MouseArea {
        //make full area clickable, since there are no interactive elements anyway
        anchors.fill: parent
        z: 0
        onClicked: wakedo.flipped = !wakedo.flipped
    }
    width: 800; height: 424
    y: 1
    source: "time-display-bg.png"
    property alias alarmTime: timeText.alarmTime
    property alias alarmTimeText: timeText.alarmTimeText
    property alias alarm: timeText.alarm
    property alias noAlarm: timeText.noAlarm
    property alias clock: clock
    property alias currentTime: timeText.currentTime

    Clock2{
        id:clock
        x: 30
        y: 0
        z: 3
    }

    TimeText {
        id:timeText
        x: 379
        y: 97
        width: 420
        height: 174
    }

    TimeDisplayCorner{
        id: timeDisplayCorner
        z: 3
    }
}
