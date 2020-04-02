#include "acco_pymodule.h"

ACCO_PyModule::ACCO_PyModule()
{

}

ACCO_PyMsg::ACCO_PyMsg()
{

}

ACCO_PyMsg::ACCO_PyMsg(const QString &outputpath, const QString &key, const QString &instrument, const QString &time)
{
    this->outputPath = outputPath;
    this->key = key;
    this->instrument = instrument;
    this->time = time;
}
