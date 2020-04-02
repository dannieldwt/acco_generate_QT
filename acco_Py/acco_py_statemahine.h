#ifndef ACCO_PY_STATEMAHINE_H
#define ACCO_PY_STATEMAHINE_H

#include <QObject>

class ACCO_PY_StateMahine : public QObject
{
    Q_OBJECT
public:
    explicit ACCO_PY_StateMahine(QObject *parent = nullptr);

signals:

};

#endif // ACCO_PY_STATEMAHINE_H
