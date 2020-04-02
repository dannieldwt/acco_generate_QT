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
}

void ACCO_Mainwindow::initTab1Connect()
{
    connect(ui->ClearLogButton, &QPushButton::clicked, this, &ACCO_Mainwindow::clearLog);
    connect(ui->SaveLogButton, &QPushButton::clicked, this, &ACCO_Mainwindow::saveLog);
    connect(ui->InputButton, &QPushButton::clicked, this, &ACCO_Mainwindow::loadInput);
    connect(ui->GenButton, &QPushButton::clicked, this, &ACCO_Mainwindow::gen);
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

