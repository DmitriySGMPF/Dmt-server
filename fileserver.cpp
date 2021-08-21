#include "fileserver.h"

FileServer::FileServer(QObject *parent) : QObject(parent)
{

}

void FileServer::createDateDirs(QDateTime date, QString file_server_path)
{
    QString year = date.toString("yyyy");
    QString month = date.toString("MM");
    QString day = date.toString("dd");

    today_path = file_server_path + year + "/" + month + "/" + day + "/";
    qDebug() << today_path;

    QDir *dir = new QDir(today_path);
    if (!dir->exists()) {
        dir->mkpath(".");
    }
}


