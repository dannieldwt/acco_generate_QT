#ifndef ACCO_PYMODULE_H
#define ACCO_PYMODULE_H

#include <QObject>

class ACCO_PyMsg
{
public:
    QString outputPath;
    QString key;
    QString instrument;
    QString time;

public:
    ACCO_PyMsg();
    ACCO_PyMsg(const QString& outputpath, const QString& key,
               const QString& instrument, const QString& time);

};



class ACCO_PyModule
{
public:
    ACCO_PyModule();
};

#endif // ACCO_PYMODULE_H
