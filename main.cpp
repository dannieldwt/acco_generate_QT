#include "acco_GUI/acco_mainwindow.h"

#include <QApplication>

//#include <Python.h>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ACCO_Mainwindow w;
    w.show();
//    return a.exec();
    //Py_SetPythonHome("D:\\acco-generate_QT\\build-acco_generate-Desktop_Qt_5_14_1_MSVC2017_64bit-Debug\\debug\\python36");
//    Py_Initialize();
//    qDebug() << "test";
//    if (!Py_IsInitialized())
//    {
//        return -1;
//    }
//    qDebug() << "test";
//    PyObject* pModule = PyImport_ImportModule("hello");
//    if (!pModule)
//    {
//        return -1;
//    }
//    qDebug() << "test";
//    PyObject* pFunHello = PyObject_GetAttrString(pModule, "hello");
//    if (!pFunHello)
//    {
//        qDebug() << "test";
//        return -1;
//    }
//    qDebug() << "test";
//    PyObject_CallFunction(pFunHello, NULL);

//    Py_Finalize();

    return a.exec();
}
