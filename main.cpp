#include <iostream>

#include <QCoreApplication>

#include "ftpclient.h"

#include "fileserver.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString this_server_path = "/home/dmitry/cpp-progects/Qt-projects/TryWriteServer/server-path/";

    FtpClient *ftp = new FtpClient;

    FileServer *file_server = new FileServer;

    while(true)
    {
        std::string command;
        std::cin >> command;

        if (command == "g")
        {
            FtpInfo ftp_info;
            ftp_info.ftp_username = "ftpserver";
            ftp_info.ftp_pass = "ftp";
            ftp_info.ftp_host = "127.0.0.1";
            ftp_info.ftp_path = "/files/testdir/*";
            ftp->getFileFromFtp(ftp_info, this_server_path);
        }
        if (command == "d")
        {
            file_server->createDateDirs(QDateTime::currentDateTime(), "/home/dmitry/cpp-progects/Qt-projects/TryWriteServer/server-path/");
        }
    }
    return a.exec();
}
