#include "acco_Log/acco_log.h"
#include <QDateTime>
#include <QDir>
#include <QCoreApplication>
#include <QFile>
#include <QMessageBox>
#include <QDebug>

ACCO_Log* ACCO_Log::m_instance = nullptr;

ACCO_Log *ACCO_Log::getLogInstance()
{
    if (m_instance == nullptr)
    {
        m_instance = new ACCO_Log();
    }
    return m_instance;
}

QString ACCO_Log::generateLog(const ACCO_LogMessage &logmsg)
{
    QDateTime time = QDateTime::currentDateTime();
    QString timeStr = time.toString("yyyy.MM.dd hh:mm:ss, ddd");
    QString logstr =timeStr + ": " + logmsg.msg + "\n";
    return logstr;
}

bool ACCO_Log::saveLog(const QString &logs)
{
    QString saveDir = QCoreApplication::applicationDirPath();
    qDebug() << saveDir;
    QString filedir = saveDir + "log.txt";
    QFile f(filedir);
    if (!f.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QMessageBox::information(NULL, QString(u8"??"),
                                 QString(u8"??????"), QString(u8"??"));
        return false;
    }
    QTextStream txtOutput(&f);
    txtOutput << logs;
    f.close();
    return true;
}

ACCO_Log::ACCO_Log()
{

}

ACCO_LogMessage::ACCO_LogMessage()
{

}

ACCO_LogMessage::ACCO_LogMessage(const QString &message)
{
    this->msg = message;
}
