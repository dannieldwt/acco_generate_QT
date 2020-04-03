#ifndef ACCO_MAINWINDOW_H
#define ACCO_MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class ACCO_Mainwindow; }
QT_END_NAMESPACE

class ACCO_Mainwindow : public QMainWindow
{
    Q_OBJECT

public:
    ACCO_Mainwindow(QWidget *parent = nullptr);

    void initTab1Connect();
    void initTab2Connect();

    ~ACCO_Mainwindow();

private:
    void clearLog();
    void saveLog();
    void createLog(const QString &msg);

    void loadInput();

    void gen();

    QString instrument2Eng(const QString& instrumentStr);

    void DeleteOne();
    void DeleteAll();
    void ShowFiles();

private:
    Ui::ACCO_Mainwindow *ui;
    QString inputPath;

};
#endif // ACCO_MAINWINDOW_H
