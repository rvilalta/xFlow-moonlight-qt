// CustomNetworkManager.h
#ifndef CUSTOMNETWORKMANAGER_H
#define CUSTOMNETWORKMANAGER_H

#include <QObject>

// Forward declaration of BwInfo
//struct BwInfo;

class CustomNetworkManager : public QObject
{
    Q_OBJECT

public:
    explicit CustomNetworkManager(QObject *parent = nullptr);
    //Q_INVOKABLE void sendPostRequest720p(const QString& BW);
    //Q_INVOKABLE void sendPostRequest1080p(const QString& BW);
    //Q_INVOKABLE void sendPostRequest1440p(const QString& BW);
    Q_INVOKABLE void sendPatchRequest(const QString& id, const QString& BW);
    Q_INVOKABLE void sendPostRequest720p();
    Q_INVOKABLE void sendPostRequest1080p();
    Q_INVOKABLE void sendPostRequest1440p();
    //Q_INVOKABLE void sendPatchRequest(const QString& id);
    
    // private:
    // int customErrorCallback(const char *str, size_t len, void *logStream);
    // void logOpenSSLErrors(std::ostream &logFile);
};

#endif // CUSTOMNETWORKMANAGER_H
