#include "ftpclient.h"

FtpClient::FtpClient(QObject *parent) : QObject(parent)
{
}

void FtpClient::getFileFromFtp(FtpInfo ftp_info, QString this_server_path)
{

    QString command_for_ftp_server = "ftp://" + ftp_info.ftp_username + ":"
            + ftp_info.ftp_pass + "@" + ftp_info.ftp_host + ftp_info.ftp_path;

    QProcess::execute("/usr/bin/wget", {"-P", this_server_path, command_for_ftp_server});


    //QProcess::execute("/usr/bin/wget", {"-P", "/home/dmitry/cpp-progects/", "ftp://ftpserver:ftp@127.0.0.1/files/text.txt"});

}

