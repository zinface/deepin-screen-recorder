/*
 * Copyright (C) 2017 ~ 2018 Deepin Technology Co., Ltd.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -c DBusZone -p dbuszone com.deepin.daemon.Zone.xml
 *
 * qdbusxml2cpp is Copyright (C) 2016 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#include "dbuszone.h"

/*
 * Implementation of interface class DBusZone
 */

const QString DBUS_ZONE_NAME = "com.deepin.daemon.Zone";
const QString DBUS_ZONE_PATH = "/com/deepin/daemon/Zone";

DBusZone::DBusZone(QObject *parent)
    : QDBusAbstractInterface(DBUS_ZONE_NAME, DBUS_ZONE_PATH, staticInterfaceName(), QDBusConnection::sessionBus(), parent)
{
    QDBusConnection::sessionBus().connect(this->service(), this->path(),
    "org.freedesktop.DBus.Properties", "PropertiesChanged","sa{sv}as",
                                          this, SLOT(__propertyChanged__(QDBusMessage)));
}

DBusZone::~DBusZone()
{
    QDBusConnection::sessionBus().disconnect(service(), path(),
    "org.freedesktop.DBus.Properties", "PropertiesChanged", "sa{sv}as",
                                             this, SLOT(propertyChanged(QDBusMessage)));
}
