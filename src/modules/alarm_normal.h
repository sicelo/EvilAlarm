/*
    EvilAlarm
    Copyright (C) 2010 Christian Pulvermacher

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/
#ifndef ALARM_NORMAL_H
#define ALARM_NORMAL_H

#include "alarm.h"

#include <QtGui>

class AlarmNormal : public Alarm
{
    Q_OBJECT
public:
    explicit AlarmNormal(QWidget *parent = 0, bool test = false);
    ~AlarmNormal() { }
protected slots:
    void updateScreen();
    virtual void restart();
    void snooze();
private:
    QLabel *label;
    QPushButton *snooze_button;
    QPushButton *stop_button;
};
#endif
