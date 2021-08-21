#ifndef FTPCLIENT_H
#define FTPCLIENT_H

#include <QObject>
#include <QProcess>
#include <QDebug>

struct FtpInfo {
    QString ftp_username, ftp_pass, ftp_host, ftp_path;
};

class FtpClient : public QObject
{
    Q_OBJECT

public:
    explicit FtpClient(QObject *parent = nullptr);

    void getFileFromFtp(FtpInfo ftp_info, QString this_server_path);

signals:

public slots:

private:

};

#endif // FTPCLIENT_H
