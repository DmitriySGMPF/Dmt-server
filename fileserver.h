#ifndef FILESERVER_H
#define FILESERVER_H

#include <QObject>

#include <QDateTime>
#include <QDir>
#include <QDebug>
class FileServer : public QObject
{
    Q_OBJECT
public:
    explicit FileServer(QObject *parent = nullptr);

    void createDateDirs(QDateTime date, QString file_server_path);

private:
    QString today_path;

signals:

};

#endif // FILESERVER_H
