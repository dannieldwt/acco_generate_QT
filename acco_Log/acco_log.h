#ifndef ACCO_LOG_H
#define ACCO_LOG_H

#include <QObject>

class ACCO_LogMessage
{
public:
    QString msg;

public:
    ACCO_LogMessage();
    ACCO_LogMessage(const QString& message);
};

class ACCO_Log
{
public:

    static ACCO_Log* getLogInstance();
    QString generateLog(const ACCO_LogMessage& logmsg);
    bool saveLog(const QString &logs);

private:
    ACCO_Log();
    static ACCO_Log *m_instance;
};

#endif // ACCO_LOG_H
