/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "mygraphicsview.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOuvrir;
    QAction *actionQuitter;
    QAction *actionInformations;
    QAction *actionPr_c_dent;
    QAction *actionSuivant;
    QAction *actionBarre_d_outils;
    QAction *action1_par_1;
    QAction *action2_par_2;
    QAction *actionMode_jour;
    QAction *actionSommaire;
    QAction *actionMarque_Page;
    QAction *actionMode_nuit;
    QAction *actionR_cemment_ouvert;
    QAction *actionContinu;
    QAction *actionPremi_re_page;
    QAction *actionDerni_re_page;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *btnLoadBG;
    QPushButton *btnSaveBG;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer;
    QPushButton *precButton;
    QPushButton *suivButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer_2;
    QPushButton *btnFitWindow;
    MyGraphicsView *m_graphicsView;
    QMenuBar *menuBar;
    QMenu *menuFichier;
    QMenu *menuHistorique;
    QMenu *menuAffichage;
    QMenu *menuType_d_affichage;
    QMenu *menuA_propos;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(898, 672);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(45, 45, 48, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(67, 67, 72, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(56, 56, 60, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(22, 22, 24, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(30, 30, 32, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush6);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush8(QColor(0, 0, 0, 128));
        brush8.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        QBrush brush9(QColor(255, 255, 255, 128));
        brush9.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        MainWindow->setPalette(palette);
        actionOuvrir = new QAction(MainWindow);
        actionOuvrir->setObjectName(QString::fromUtf8("actionOuvrir"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../img/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOuvrir->setIcon(icon);
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../img/block.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuitter->setIcon(icon1);
        actionInformations = new QAction(MainWindow);
        actionInformations->setObjectName(QString::fromUtf8("actionInformations"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../img/idea.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionInformations->setIcon(icon2);
        actionPr_c_dent = new QAction(MainWindow);
        actionPr_c_dent->setObjectName(QString::fromUtf8("actionPr_c_dent"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../img/previous.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPr_c_dent->setIcon(icon3);
        actionSuivant = new QAction(MainWindow);
        actionSuivant->setObjectName(QString::fromUtf8("actionSuivant"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../img/next-button.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSuivant->setIcon(icon4);
        actionBarre_d_outils = new QAction(MainWindow);
        actionBarre_d_outils->setObjectName(QString::fromUtf8("actionBarre_d_outils"));
        actionBarre_d_outils->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../img/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBarre_d_outils->setIcon(icon5);
        action1_par_1 = new QAction(MainWindow);
        action1_par_1->setObjectName(QString::fromUtf8("action1_par_1"));
        action1_par_1->setCheckable(true);
        action2_par_2 = new QAction(MainWindow);
        action2_par_2->setObjectName(QString::fromUtf8("action2_par_2"));
        action2_par_2->setCheckable(true);
        actionMode_jour = new QAction(MainWindow);
        actionMode_jour->setObjectName(QString::fromUtf8("actionMode_jour"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("../img/sun.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMode_jour->setIcon(icon6);
        actionSommaire = new QAction(MainWindow);
        actionSommaire->setObjectName(QString::fromUtf8("actionSommaire"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("../img/jupiter.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSommaire->setIcon(icon7);
        actionMarque_Page = new QAction(MainWindow);
        actionMarque_Page->setObjectName(QString::fromUtf8("actionMarque_Page"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("../img/book.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMarque_Page->setIcon(icon8);
        actionMode_nuit = new QAction(MainWindow);
        actionMode_nuit->setObjectName(QString::fromUtf8("actionMode_nuit"));
        actionR_cemment_ouvert = new QAction(MainWindow);
        actionR_cemment_ouvert->setObjectName(QString::fromUtf8("actionR_cemment_ouvert"));
        actionR_cemment_ouvert->setCheckable(false);
        actionR_cemment_ouvert->setChecked(false);
        actionR_cemment_ouvert->setEnabled(false);
        actionR_cemment_ouvert->setVisible(false);
        actionContinu = new QAction(MainWindow);
        actionContinu->setObjectName(QString::fromUtf8("actionContinu"));
        actionContinu->setCheckable(true);
        actionPremi_re_page = new QAction(MainWindow);
        actionPremi_re_page->setObjectName(QString::fromUtf8("actionPremi_re_page"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8("../img/start.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPremi_re_page->setIcon(icon9);
        actionDerni_re_page = new QAction(MainWindow);
        actionDerni_re_page->setObjectName(QString::fromUtf8("actionDerni_re_page"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8("../img/panel.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDerni_re_page->setIcon(icon10);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btnLoadBG = new QPushButton(centralWidget);
        btnLoadBG->setObjectName(QString::fromUtf8("btnLoadBG"));
        btnLoadBG->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 70);\n"
"selection-background-color: rgb(28, 151, 234);\n"
"color: rgb(255, 255, 255);\n"
"alternate-background-color: rgb(28, 151, 234);"));
        btnLoadBG->setIcon(icon);

        verticalLayout->addWidget(btnLoadBG);

        btnSaveBG = new QPushButton(centralWidget);
        btnSaveBG->setObjectName(QString::fromUtf8("btnSaveBG"));
        btnSaveBG->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 70);\n"
"selection-background-color: rgb(28, 151, 234);\n"
"color: rgb(255, 255, 255);\n"
"alternate-background-color: rgb(28, 151, 234);"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8("../img/floppy.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSaveBG->setIcon(icon11);

        verticalLayout->addWidget(btnSaveBG);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 70);\n"
"selection-background-color: rgb(28, 151, 234);\n"
"color: rgb(255, 255, 255);\n"
"alternate-background-color: rgb(28, 151, 234);"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8("../img/bookmark.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon12);

        verticalLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 70);\n"
"selection-background-color: rgb(28, 151, 234);\n"
"color: rgb(255, 255, 255);\n"
"alternate-background-color: rgb(28, 151, 234);"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8("../img/notebook.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon13);

        verticalLayout->addWidget(pushButton_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        precButton = new QPushButton(centralWidget);
        precButton->setObjectName(QString::fromUtf8("precButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(precButton->sizePolicy().hasHeightForWidth());
        precButton->setSizePolicy(sizePolicy);
        precButton->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 70);\n"
"selection-background-color: rgb(28, 151, 234);\n"
"color: rgb(255, 255, 255);\n"
"alternate-background-color: rgb(28, 151, 234);"));
        precButton->setIcon(icon3);

        verticalLayout->addWidget(precButton);

        suivButton = new QPushButton(centralWidget);
        suivButton->setObjectName(QString::fromUtf8("suivButton"));
        QFont font;
        font.setUnderline(false);
        suivButton->setFont(font);
        suivButton->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 70);\n"
"selection-background-color: rgb(28, 151, 234);\n"
"color: rgb(255, 255, 255);\n"
"alternate-background-color: rgb(28, 151, 234);"));
        suivButton->setIcon(icon4);

        verticalLayout->addWidget(suivButton);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 70);\n"
"selection-background-color: rgb(28, 151, 234);\n"
"color: rgb(255, 255, 255);\n"
"alternate-background-color: rgb(28, 151, 234);"));
        pushButton_2->setIcon(icon8);

        verticalLayout->addWidget(pushButton_2);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        lineEdit->setBaseSize(QSize(0, 0));
        lineEdit->setAutoFillBackground(false);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 70);\n"
"selection-background-color: rgb(28, 151, 234);\n"
"color: rgb(0, 0, 0);\n"
"alternate-background-color: rgb(28, 151, 234);\n"
""));
        lineEdit->setDragEnabled(true);

        verticalLayout->addWidget(lineEdit);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        btnFitWindow = new QPushButton(centralWidget);
        btnFitWindow->setObjectName(QString::fromUtf8("btnFitWindow"));
        btnFitWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 70);\n"
"selection-background-color: rgb(28, 151, 234);\n"
"color: rgb(255, 255, 255);\n"
"alternate-background-color: rgb(28, 151, 234);"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8("../img/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnFitWindow->setIcon(icon14);

        verticalLayout->addWidget(btnFitWindow);


        horizontalLayout->addLayout(verticalLayout);

        m_graphicsView = new MyGraphicsView(centralWidget);
        m_graphicsView->setObjectName(QString::fromUtf8("m_graphicsView"));
        m_graphicsView->setStyleSheet(QString::fromUtf8("selection-background-color: rgb(28, 151, 234);\n"
""));
        m_graphicsView->setFrameShape(QFrame::NoFrame);
        m_graphicsView->setFrameShadow(QFrame::Sunken);
        m_graphicsView->setLineWidth(1);
        m_graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        m_graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);

        horizontalLayout->addWidget(m_graphicsView);


        horizontalLayout_2->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 898, 26));
        menuBar->setStyleSheet(QString::fromUtf8("background-color: rgb(45, 45, 48);\n"
"color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(28, 151, 234);\\n"));
        menuBar->setNativeMenuBar(true);
        menuFichier = new QMenu(menuBar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush10(QColor(28, 151, 234, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush10);
        QBrush brush11(QColor(255, 255, 255, 128));
        brush11.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush11);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush10);
        QBrush brush12(QColor(255, 255, 255, 128));
        brush12.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush10);
        QBrush brush13(QColor(255, 255, 255, 128));
        brush13.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush13);
#endif
        menuFichier->setPalette(palette1);
        menuFichier->setContextMenuPolicy(Qt::NoContextMenu);
        menuFichier->setAutoFillBackground(false);
        menuFichier->setStyleSheet(QString::fromUtf8("selection-background-color: rgb(28, 151, 234);\n"
""));
        menuHistorique = new QMenu(menuFichier);
        menuHistorique->setObjectName(QString::fromUtf8("menuHistorique"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8("../img/books.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuHistorique->setIcon(icon15);
        menuAffichage = new QMenu(menuBar);
        menuAffichage->setObjectName(QString::fromUtf8("menuAffichage"));
        menuType_d_affichage = new QMenu(menuAffichage);
        menuType_d_affichage->setObjectName(QString::fromUtf8("menuType_d_affichage"));
        menuA_propos = new QMenu(menuBar);
        menuA_propos->setObjectName(QString::fromUtf8("menuA_propos"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFichier->menuAction());
        menuBar->addAction(menuAffichage->menuAction());
        menuBar->addAction(menuA_propos->menuAction());
        menuFichier->addAction(actionOuvrir);
        menuFichier->addAction(menuHistorique->menuAction());
        menuFichier->addSeparator();
        menuFichier->addAction(actionQuitter);
        menuHistorique->addAction(actionR_cemment_ouvert);
        menuAffichage->addAction(actionPr_c_dent);
        menuAffichage->addAction(actionSuivant);
        menuAffichage->addSeparator();
        menuAffichage->addAction(actionBarre_d_outils);
        menuAffichage->addAction(menuType_d_affichage->menuAction());
        menuAffichage->addAction(actionMode_jour);
        menuAffichage->addAction(actionSommaire);
        menuAffichage->addAction(actionMarque_Page);
        menuAffichage->addAction(actionMode_nuit);
        menuAffichage->addAction(actionPremi_re_page);
        menuAffichage->addAction(actionDerni_re_page);
        menuType_d_affichage->addAction(action1_par_1);
        menuType_d_affichage->addAction(action2_par_2);
        menuType_d_affichage->addAction(actionContinu);
        menuA_propos->addAction(actionInformations);

        retranslateUi(MainWindow);
        QObject::connect(actionOuvrir, SIGNAL(triggered()), MainWindow, SLOT(onPressLoadImage()));
        QObject::connect(actionPr_c_dent, SIGNAL(triggered()), MainWindow, SLOT(onPressPrecImage()));
        QObject::connect(actionSuivant, SIGNAL(triggered()), MainWindow, SLOT(onPressSuivImage()));
        QObject::connect(actionQuitter, SIGNAL(triggered()), MainWindow, SLOT(close()));
        QObject::connect(btnFitWindow, SIGNAL(clicked()), MainWindow, SLOT(onPressFitWindow()));
        QObject::connect(btnLoadBG, SIGNAL(clicked()), MainWindow, SLOT(onPressLoadImage()));
        QObject::connect(lineEdit, SIGNAL(textChanged(QString)), MainWindow, SLOT(onPageNumberRequest(QString)));
        QObject::connect(suivButton, SIGNAL(clicked()), MainWindow, SLOT(onPressSuivImage()));
        QObject::connect(btnSaveBG, SIGNAL(clicked()), MainWindow, SLOT(onPressSaveImage()));
        QObject::connect(precButton, SIGNAL(clicked()), MainWindow, SLOT(onPressPrecImage()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), MainWindow, SLOT(onPressGoToBookmark()));
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(onPressAddBookmark()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "ENSTA CBR", nullptr));
        actionOuvrir->setText(QApplication::translate("MainWindow", "Ouvrir", nullptr));
#ifndef QT_NO_SHORTCUT
        actionOuvrir->setShortcut(QApplication::translate("MainWindow", "O", nullptr));
#endif // QT_NO_SHORTCUT
        actionQuitter->setText(QApplication::translate("MainWindow", "Quitter", nullptr));
#ifndef QT_NO_TOOLTIP
        actionQuitter->setToolTip(QApplication::translate("MainWindow", "x pour quitter", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionQuitter->setShortcut(QApplication::translate("MainWindow", "X", nullptr));
#endif // QT_NO_SHORTCUT
        actionInformations->setText(QApplication::translate("MainWindow", "Informations", nullptr));
        actionPr_c_dent->setText(QApplication::translate("MainWindow", "Pr\303\251c\303\251dent", nullptr));
#ifndef QT_NO_SHORTCUT
        actionPr_c_dent->setShortcut(QApplication::translate("MainWindow", "Left", nullptr));
#endif // QT_NO_SHORTCUT
        actionSuivant->setText(QApplication::translate("MainWindow", "Suivant", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSuivant->setShortcut(QApplication::translate("MainWindow", "Right", nullptr));
#endif // QT_NO_SHORTCUT
        actionBarre_d_outils->setText(QApplication::translate("MainWindow", "Barre d'outils", nullptr));
        action1_par_1->setText(QApplication::translate("MainWindow", "1 par 1", nullptr));
        action2_par_2->setText(QApplication::translate("MainWindow", "2 par 2", nullptr));
        actionMode_jour->setText(QApplication::translate("MainWindow", "Mode jour", nullptr));
        actionSommaire->setText(QApplication::translate("MainWindow", "Mode nuit", nullptr));
        actionMarque_Page->setText(QApplication::translate("MainWindow", "Marque Page", nullptr));
        actionMode_nuit->setText(QApplication::translate("MainWindow", "Sommaire", nullptr));
        actionR_cemment_ouvert->setText(QApplication::translate("MainWindow", "R\303\251cemment ouvert", nullptr));
#ifndef QT_NO_STATUSTIP
        actionR_cemment_ouvert->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        actionContinu->setText(QApplication::translate("MainWindow", "Continu", nullptr));
        actionPremi_re_page->setText(QApplication::translate("MainWindow", "Premi\303\250re page", nullptr));
        actionDerni_re_page->setText(QApplication::translate("MainWindow", "Derni\303\250re page", nullptr));
        btnLoadBG->setText(QApplication::translate("MainWindow", "Charger un fichier", nullptr));
        btnSaveBG->setText(QApplication::translate("MainWindow", "Sauvegarder une image", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Ajouter Marque Page", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "Modifier Sommaire", nullptr));
        precButton->setText(QApplication::translate("MainWindow", "Pr\303\251c\303\251dent", nullptr));
#ifndef QT_NO_SHORTCUT
        precButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        suivButton->setText(QApplication::translate("MainWindow", "Suivant", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Aller \303\240 Marque Page", nullptr));
        label->setText(QApplication::translate("MainWindow", "Zoom -> Ctrl+Roulette", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        lineEdit->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        lineEdit->setInputMask(QString());
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("MainWindow", "Aller \303\240 la page", nullptr));
        btnFitWindow->setText(QApplication::translate("MainWindow", "Adapter l'image", nullptr));
        menuFichier->setTitle(QApplication::translate("MainWindow", "Fichier", nullptr));
        menuHistorique->setTitle(QApplication::translate("MainWindow", "Historique", nullptr));
        menuAffichage->setTitle(QApplication::translate("MainWindow", "Affichage", nullptr));
        menuType_d_affichage->setTitle(QApplication::translate("MainWindow", "Type d'affichage", nullptr));
        menuA_propos->setTitle(QApplication::translate("MainWindow", "A propos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
