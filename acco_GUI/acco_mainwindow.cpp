#include "acco_mainwindow.h"
#include "ui_acco_mainwindow.h"
#include "acco_Log/acco_log.h"
#include "acco_Py/acco_pymodule.h"
#include <QStandardPaths>
#include <QFileDialog>
#include <QDebug>
#include <QRegExp>
#include <QMessageBox>

ACCO_Mainwindow::ACCO_Mainwindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ACCO_Mainwindow)
{
    ui->setupUi(this);
    initTab1Connect();
    initTab2Connect();
}

void ACCO_Mainwindow::initTab1Connect()
{
    connect(ui->ClearLogButton, &QPushButton::clicked, this, &ACCO_Mainwindow::clearLog);
    connect(ui->SaveLogButton, &QPushButton::clicked, this, &ACCO_Mainwindow::saveLog);
    connect(ui->InputButton, &QPushButton::clicked, this, &ACCO_Mainwindow::loadInput);
    connect(ui->GenButton, &QPushButton::clicked, this, &ACCO_Mainwindow::gen);
}

void ACCO_Mainwindow::initTab2Connect()
{
    connect(ui->RefreshButton, &QPushButton::clicked, this, &ACCO_Mainwindow::ShowFiles);
    connect(ui->DeleteAllButton, &QPushButton::clicked, this, &ACCO_Mainwindow::DeleteAll);
    connect(ui->DeleteButton, &QPushButton::clicked, this, &ACCO_Mainwindow::DeleteOne);
}

ACCO_Mainwindow::~ACCO_Mainwindow()
{
    delete ui;
}

void ACCO_Mainwindow::clearLog()
{
    ui->Log->clear();
}

void ACCO_Mainwindow::saveLog()
{
    int counts = ui->Log->count();
    QString content = "";
    for (int i = 0; i < counts; ++i)
    {
        QString text = ui->Log->item(i)->text();
        if (i == 0)
            content += text;
        else
            content = content + "\n" + text;
    }
    ACCO_Log::getLogInstance()->saveLog(content);
}

void ACCO_Mainwindow::createLog(const QString &msg)
{
    QString log = ACCO_Log::getLogInstance()->generateLog(msg);
    ui->Log->addItem(log);
}

void ACCO_Mainwindow::loadInput()
{
    QString location = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
    QString filters = u8"MIDI??(*.mid)";
    QString title = u8"???????";
    inputPath = QFileDialog::getOpenFileName(this, title, location, filters);
    ui->InputLineEdit->setText(inputPath);
    QString outputDefault = inputPath.mid(inputPath.lastIndexOf('/') + 1, -1);
    ui->OutputLineEdit->setText(outputDefault);
    createLog(QString(u8"????????" + outputDefault));
    qDebug() << outputDefault;
    qDebug() << inputPath;
}

void ACCO_Mainwindow::gen()
{
    QString pattern = "*.mid";
    QRegExp re(pattern);
    QString outputStr = ui->OutputLineEdit->text();
    bool match = re.exactMatch(outputStr);
    if (!match)
    {
        QMessageBox::warning(this, u8"??", u8"??????????");
        return ;
    }
    QString currDir = QCoreApplication::applicationDirPath();
    QString outputPath = currDir + "/acco/" + outputStr;

    QString key = ui->KeyCombo->currentText();

    QString instrumentStr = ui->InstrumentCombo->currentText();
    QString instrument = instrument2Eng(instrument);

    QString time = ui->TimeCombo->currentText();

    ACCO_PyMsg msg(outputPath, key,
                   instrumentStr, time);
    //to be continued
}

QString ACCO_Mainwindow::instrument2Eng(const QString &instrumentStr)
{
    if (instrumentStr == u8"??")
    {
        return "Guitar";
    }
    else if (instrumentStr == u8"????")
    {
        return "Guitar";
    }
    else if (instrumentStr == u8"??")
    {
        return "Guitar";
    }
    else if (instrumentStr == u8"???")
    {
        return "Guitar";
    }
    else if (instrumentStr == u8"???")
    {
        return "Guitar";
    }
    else if (instrumentStr == u8"????")
    {
        return "Guitar";
    }
    else if (instrumentStr == u8"???")
    {
        return "Guitar";
    }
}



void ACCO_Mainwindow::DeleteOne()
{
    QDir rootDir(QDir::currentPath());
    rootDir.cd("song");
    QString fileName = ui->FileList->selectedItems().first()->text();
    rootDir.remove(fileName + ".mid");
    ShowFiles();
}

void ACCO_Mainwindow::DeleteAll()
{
    QDir rootDir(QDir::currentPath());
    rootDir.cd("song");
    QStringList string;
    string<<"*";
    QFileInfoList list = rootDir.entryInfoList(string);
    for(unsigned int i=0; i<list.count() ;i++)
    {
        QFileInfo tmpFileInfo = list.at(i);
        QString fileName = tmpFileInfo.fileName();
        rootDir.remove(fileName);
    }
    ShowFiles();
}

void ACCO_Mainwindow::ShowFiles()
{
    QDir rootDir(QDir::currentPath());
    rootDir.cd("song");
    QStringList string;
    string<<"*";
    QFileInfoList list = rootDir.entryInfoList(string);
    ui->FileList->clear();

//    if(list.count() == 0)
//    {
//        QListWidgetItem *tmp = new QListWidgetItem("暂时没有伴奏");
//        ui->FileList->addItem(tmp);
//    }

    for(unsigned int i=0; i<list.count() ;i++)
    {
        QFileInfo tmpFileInfo = list.at(i);
        /*if(tmpFileInfo.isDir())
            {
                QIcon icon("dir.png");
                QString fileName = tmpFileInfo.fileName();
                QListWidgetItem *tmp = new QListWidgetItem(icon, fileName);
                ui->FileList->addItem(tmp);
            }
           else */
        if(tmpFileInfo.isFile() && tmpFileInfo.suffix() == "mid")
        {
            QString fileName = tmpFileInfo.baseName(); //.fileName();带后缀
            QListWidgetItem *tmp = new QListWidgetItem(fileName);
            ui->FileList->addItem(tmp);
        }
    }
}
