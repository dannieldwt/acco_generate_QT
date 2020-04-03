/********************************************************************************
** Form generated from reading UI file 'acco_mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCO_MAINWINDOW_H
#define UI_ACCO_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ACCO_Mainwindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *Acco_Tab;
    QWidget *Acco_tab1;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *InputLabel;
    QLineEdit *InputLineEdit;
    QPushButton *InputButton;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QLabel *InstrumentLabel;
    QLineEdit *OutputLineEdit;
    QLabel *TimeLabel;
    QLabel *KeyLabel;
    QComboBox *KeyCombo;
    QLabel *OutputLabel;
    QComboBox *InstrumentCombo;
    QPushButton *GenButton;
    QComboBox *TimeCombo;
    QGridLayout *gridLayout_5;
    QPushButton *SaveLogButton;
    QPushButton *ClearLogButton;
    QListWidget *Log;
    QWidget *Acco_tab2;
    QGridLayout *gridLayout_6;
    QPushButton *DeleteButton;
    QPushButton *DeleteAllButton;
    QPushButton *RefreshButton;
    QListWidget *FileList;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ACCO_Mainwindow)
    {
        if (ACCO_Mainwindow->objectName().isEmpty())
            ACCO_Mainwindow->setObjectName(QString::fromUtf8("ACCO_Mainwindow"));
        ACCO_Mainwindow->resize(800, 600);
        centralwidget = new QWidget(ACCO_Mainwindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Acco_Tab = new QTabWidget(centralwidget);
        Acco_Tab->setObjectName(QString::fromUtf8("Acco_Tab"));
        Acco_tab1 = new QWidget();
        Acco_tab1->setObjectName(QString::fromUtf8("Acco_tab1"));
        gridLayout_2 = new QGridLayout(Acco_tab1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        InputLabel = new QLabel(Acco_tab1);
        InputLabel->setObjectName(QString::fromUtf8("InputLabel"));

        horizontalLayout->addWidget(InputLabel);

        InputLineEdit = new QLineEdit(Acco_tab1);
        InputLineEdit->setObjectName(QString::fromUtf8("InputLineEdit"));

        horizontalLayout->addWidget(InputLineEdit);

        InputButton = new QPushButton(Acco_tab1);
        InputButton->setObjectName(QString::fromUtf8("InputButton"));

        horizontalLayout->addWidget(InputButton);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox = new QGroupBox(Acco_tab1);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        InstrumentLabel = new QLabel(groupBox);
        InstrumentLabel->setObjectName(QString::fromUtf8("InstrumentLabel"));

        gridLayout_4->addWidget(InstrumentLabel, 2, 0, 1, 1);

        OutputLineEdit = new QLineEdit(groupBox);
        OutputLineEdit->setObjectName(QString::fromUtf8("OutputLineEdit"));

        gridLayout_4->addWidget(OutputLineEdit, 0, 1, 1, 1);

        TimeLabel = new QLabel(groupBox);
        TimeLabel->setObjectName(QString::fromUtf8("TimeLabel"));

        gridLayout_4->addWidget(TimeLabel, 3, 0, 1, 1);

        KeyLabel = new QLabel(groupBox);
        KeyLabel->setObjectName(QString::fromUtf8("KeyLabel"));

        gridLayout_4->addWidget(KeyLabel, 1, 0, 1, 1);

        KeyCombo = new QComboBox(groupBox);
        KeyCombo->addItem(QString());
        KeyCombo->setObjectName(QString::fromUtf8("KeyCombo"));

        gridLayout_4->addWidget(KeyCombo, 1, 1, 1, 1);

        OutputLabel = new QLabel(groupBox);
        OutputLabel->setObjectName(QString::fromUtf8("OutputLabel"));

        gridLayout_4->addWidget(OutputLabel, 0, 0, 1, 1);

        InstrumentCombo = new QComboBox(groupBox);
        InstrumentCombo->addItem(QString());
        InstrumentCombo->addItem(QString());
        InstrumentCombo->addItem(QString());
        InstrumentCombo->addItem(QString());
        InstrumentCombo->addItem(QString());
        InstrumentCombo->addItem(QString());
        InstrumentCombo->addItem(QString());
        InstrumentCombo->setObjectName(QString::fromUtf8("InstrumentCombo"));

        gridLayout_4->addWidget(InstrumentCombo, 2, 1, 1, 1);

        GenButton = new QPushButton(groupBox);
        GenButton->setObjectName(QString::fromUtf8("GenButton"));

        gridLayout_4->addWidget(GenButton, 4, 0, 1, 2);

        TimeCombo = new QComboBox(groupBox);
        TimeCombo->addItem(QString());
        TimeCombo->setObjectName(QString::fromUtf8("TimeCombo"));

        gridLayout_4->addWidget(TimeCombo, 3, 1, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout_3, 1, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        SaveLogButton = new QPushButton(Acco_tab1);
        SaveLogButton->setObjectName(QString::fromUtf8("SaveLogButton"));

        gridLayout_5->addWidget(SaveLogButton, 1, 0, 1, 1);

        ClearLogButton = new QPushButton(Acco_tab1);
        ClearLogButton->setObjectName(QString::fromUtf8("ClearLogButton"));

        gridLayout_5->addWidget(ClearLogButton, 1, 1, 1, 1);

        Log = new QListWidget(Acco_tab1);
        Log->setObjectName(QString::fromUtf8("Log"));

        gridLayout_5->addWidget(Log, 0, 0, 1, 2);


        gridLayout_2->addLayout(gridLayout_5, 2, 0, 1, 1);

        Acco_Tab->addTab(Acco_tab1, QString());
        Acco_tab2 = new QWidget();
        Acco_tab2->setObjectName(QString::fromUtf8("Acco_tab2"));
        gridLayout_6 = new QGridLayout(Acco_tab2);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        DeleteButton = new QPushButton(Acco_tab2);
        DeleteButton->setObjectName(QString::fromUtf8("DeleteButton"));

        gridLayout_6->addWidget(DeleteButton, 0, 0, 1, 1);

        DeleteAllButton = new QPushButton(Acco_tab2);
        DeleteAllButton->setObjectName(QString::fromUtf8("DeleteAllButton"));

        gridLayout_6->addWidget(DeleteAllButton, 0, 1, 1, 1);

        RefreshButton = new QPushButton(Acco_tab2);
        RefreshButton->setObjectName(QString::fromUtf8("RefreshButton"));

        gridLayout_6->addWidget(RefreshButton, 0, 2, 1, 1);

        FileList = new QListWidget(Acco_tab2);
        FileList->setObjectName(QString::fromUtf8("FileList"));

        gridLayout_6->addWidget(FileList, 1, 0, 1, 3);

        Acco_Tab->addTab(Acco_tab2, QString());

        gridLayout->addWidget(Acco_Tab, 0, 0, 1, 1);

        ACCO_Mainwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ACCO_Mainwindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        ACCO_Mainwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ACCO_Mainwindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ACCO_Mainwindow->setStatusBar(statusbar);

        retranslateUi(ACCO_Mainwindow);

        Acco_Tab->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(ACCO_Mainwindow);
    } // setupUi

    void retranslateUi(QMainWindow *ACCO_Mainwindow)
    {
        ACCO_Mainwindow->setWindowTitle(QCoreApplication::translate("ACCO_Mainwindow", "ACCO_Mainwindow", nullptr));
        InputLabel->setText(QCoreApplication::translate("ACCO_Mainwindow", "\344\270\273\346\227\213\345\276\213\346\226\207\344\273\266", nullptr));
        InputButton->setText(QCoreApplication::translate("ACCO_Mainwindow", "\345\212\240\350\275\275", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ACCO_Mainwindow", "\344\274\264\345\245\217\351\205\215\347\275\256", nullptr));
        InstrumentLabel->setText(QCoreApplication::translate("ACCO_Mainwindow", "\344\271\220\345\231\250\357\274\232", nullptr));
        TimeLabel->setText(QCoreApplication::translate("ACCO_Mainwindow", "\350\212\202\346\213\215\357\274\232", nullptr));
        KeyLabel->setText(QCoreApplication::translate("ACCO_Mainwindow", "\350\260\203\345\274\217\357\274\232", nullptr));
        KeyCombo->setItemText(0, QCoreApplication::translate("ACCO_Mainwindow", "C", nullptr));

        OutputLabel->setText(QCoreApplication::translate("ACCO_Mainwindow", "\350\276\223\345\207\272\346\226\207\344\273\266\345\220\215\357\274\232", nullptr));
        InstrumentCombo->setItemText(0, QCoreApplication::translate("ACCO_Mainwindow", "\345\220\211\344\273\226", nullptr));
        InstrumentCombo->setItemText(1, QCoreApplication::translate("ACCO_Mainwindow", "\345\217\244\345\205\270\345\220\211\344\273\226", nullptr));
        InstrumentCombo->setItemText(2, QCoreApplication::translate("ACCO_Mainwindow", "\347\224\265\345\220\211\344\273\226", nullptr));
        InstrumentCombo->setItemText(3, QCoreApplication::translate("ACCO_Mainwindow", "\351\222\242\347\220\264", nullptr));
        InstrumentCombo->setItemText(4, QCoreApplication::translate("ACCO_Mainwindow", "\345\260\217\346\217\220\347\220\264", nullptr));
        InstrumentCombo->setItemText(5, QCoreApplication::translate("ACCO_Mainwindow", "\345\244\247\346\217\220\347\220\264", nullptr));
        InstrumentCombo->setItemText(6, QCoreApplication::translate("ACCO_Mainwindow", "\347\210\265\345\243\253\351\274\223", nullptr));

        GenButton->setText(QCoreApplication::translate("ACCO_Mainwindow", "\347\224\237\346\210\220\344\274\264\345\245\217", nullptr));
        TimeCombo->setItemText(0, QCoreApplication::translate("ACCO_Mainwindow", "4/4", nullptr));

        SaveLogButton->setText(QCoreApplication::translate("ACCO_Mainwindow", "\345\257\274\345\207\272", nullptr));
        ClearLogButton->setText(QCoreApplication::translate("ACCO_Mainwindow", "\346\270\205\351\231\244", nullptr));
        Acco_Tab->setTabText(Acco_Tab->indexOf(Acco_tab1), QCoreApplication::translate("ACCO_Mainwindow", "\344\274\264\345\245\217\347\224\237\346\210\220", nullptr));
        DeleteButton->setText(QCoreApplication::translate("ACCO_Mainwindow", "\345\210\240\351\231\244", nullptr));
        DeleteAllButton->setText(QCoreApplication::translate("ACCO_Mainwindow", " \345\210\240\351\231\244\346\211\200\346\234\211", nullptr));
        RefreshButton->setText(QCoreApplication::translate("ACCO_Mainwindow", " \345\210\267\346\226\260", nullptr));
        Acco_Tab->setTabText(Acco_Tab->indexOf(Acco_tab2), QCoreApplication::translate("ACCO_Mainwindow", "\344\274\264\345\245\217\347\256\241\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ACCO_Mainwindow: public Ui_ACCO_Mainwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCO_MAINWINDOW_H
