/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was:
 *
 * qdbusxml2cpp is Copyright (C) 2016 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef WIMAXNSPINTERFACE_H
#define WIMAXNSPINTERFACE_H

#include "generictypes.h"

#include <QObject>
#include <QString>
#include <QVariant>
#include <QtDBus>

/*
 * Proxy class for interface org.freedesktop.NetworkManager.WiMax.Nsp
 */
class OrgFreedesktopNetworkManagerWiMaxNspInterface : public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
#ifdef NMQT_STATIC
    {
        return "org.kde.fakenetwork.Settings.WiMax.Nsp";
    }
#else
    {
        return "org.freedesktop.NetworkManager.WiMax.Nsp";
    }
#endif

public:
    OrgFreedesktopNetworkManagerWiMaxNspInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~OrgFreedesktopNetworkManagerWiMaxNspInterface() override;

    Q_PROPERTY(QString Name READ name)
    inline QString name() const
    {
        return qvariant_cast<QString>(property("Name"));
    }

    Q_PROPERTY(uint NetworkType READ networkType)
    inline uint networkType() const
    {
        return qvariant_cast<uint>(property("NetworkType"));
    }

    Q_PROPERTY(uint SignalQuality READ signalQuality)
    inline uint signalQuality() const
    {
        return qvariant_cast<uint>(property("SignalQuality"));
    }

public Q_SLOTS: // METHODS
Q_SIGNALS: // SIGNALS
    void PropertiesChanged(const QVariantMap &properties);
};

#endif
