#ifndef FTPCLIENT_H
#define FTPCLIENT_H

#include <QObject>

class FtpClient : public QObject
{
    Q_OBJECT
public:
    explicit FtpClient(QObject *parent = nullptr);

signals:

};

#endif // FTPCLIENT_H
