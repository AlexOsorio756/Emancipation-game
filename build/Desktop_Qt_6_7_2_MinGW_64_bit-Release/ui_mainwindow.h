/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *menuPage;
    QGraphicsView *graphicsViewMenu;
    QPushButton *levelOneButton;
    QPushButton *levelTwoButton;
    QPushButton *exitButton;
    QWidget *pageLevelOne;
    QGraphicsView *graphicsViewLevelOne;
    QWidget *pageLevelTwo;
    QGraphicsView *graphicsViewLevelTwo;
    QWidget *pageWin;
    QGraphicsView *graphicsViewWin;
    QPushButton *backToMenuButton;
    QLabel *label_2;
    QWidget *pageLose;
    QGraphicsView *graphicsViewLose;
    QPushButton *backToMenuButton_2;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(800, 600));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 800, 600));
        menuPage = new QWidget();
        menuPage->setObjectName("menuPage");
        graphicsViewMenu = new QGraphicsView(menuPage);
        graphicsViewMenu->setObjectName("graphicsViewMenu");
        graphicsViewMenu->setGeometry(QRect(0, 0, 801, 601));
        levelOneButton = new QPushButton(menuPage);
        levelOneButton->setObjectName("levelOneButton");
        levelOneButton->setGeometry(QRect(300, 250, 200, 50));
        QFont font;
        font.setFamilies({QString::fromUtf8("Kristen ITC")});
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(true);
        levelOneButton->setFont(font);
        levelOneButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        levelTwoButton = new QPushButton(menuPage);
        levelTwoButton->setObjectName("levelTwoButton");
        levelTwoButton->setGeometry(QRect(300, 350, 200, 50));
        levelTwoButton->setFont(font);
        levelTwoButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        exitButton = new QPushButton(menuPage);
        exitButton->setObjectName("exitButton");
        exitButton->setGeometry(QRect(300, 450, 200, 50));
        exitButton->setFont(font);
        exitButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        stackedWidget->addWidget(menuPage);
        pageLevelOne = new QWidget();
        pageLevelOne->setObjectName("pageLevelOne");
        graphicsViewLevelOne = new QGraphicsView(pageLevelOne);
        graphicsViewLevelOne->setObjectName("graphicsViewLevelOne");
        graphicsViewLevelOne->setGeometry(QRect(0, 0, 800, 600));
        stackedWidget->addWidget(pageLevelOne);
        pageLevelTwo = new QWidget();
        pageLevelTwo->setObjectName("pageLevelTwo");
        graphicsViewLevelTwo = new QGraphicsView(pageLevelTwo);
        graphicsViewLevelTwo->setObjectName("graphicsViewLevelTwo");
        graphicsViewLevelTwo->setGeometry(QRect(0, 0, 800, 600));
        stackedWidget->addWidget(pageLevelTwo);
        pageWin = new QWidget();
        pageWin->setObjectName("pageWin");
        graphicsViewWin = new QGraphicsView(pageWin);
        graphicsViewWin->setObjectName("graphicsViewWin");
        graphicsViewWin->setGeometry(QRect(-80, -30, 800, 600));
        backToMenuButton = new QPushButton(pageWin);
        backToMenuButton->setObjectName("backToMenuButton");
        backToMenuButton->setGeometry(QRect(300, 400, 200, 50));
        backToMenuButton->setFont(font);
        backToMenuButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        label_2 = new QLabel(pageWin);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(300, 300, 200, 50));
        label_2->setFont(font);
        label_2->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        label_2->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        label_2->setTextFormat(Qt::TextFormat::MarkdownText);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        stackedWidget->addWidget(pageWin);
        pageLose = new QWidget();
        pageLose->setObjectName("pageLose");
        graphicsViewLose = new QGraphicsView(pageLose);
        graphicsViewLose->setObjectName("graphicsViewLose");
        graphicsViewLose->setGeometry(QRect(0, 0, 800, 600));
        backToMenuButton_2 = new QPushButton(pageLose);
        backToMenuButton_2->setObjectName("backToMenuButton_2");
        backToMenuButton_2->setGeometry(QRect(300, 400, 200, 50));
        backToMenuButton_2->setFont(font);
        backToMenuButton_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        label = new QLabel(pageLose);
        label->setObjectName("label");
        label->setGeometry(QRect(300, 300, 200, 50));
        label->setFont(font);
        label->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        label->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        label->setTextFormat(Qt::TextFormat::MarkdownText);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        stackedWidget->addWidget(pageLose);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        levelOneButton->setText(QCoreApplication::translate("MainWindow", "Level One", nullptr));
        levelTwoButton->setText(QCoreApplication::translate("MainWindow", "Level Two", nullptr));
        exitButton->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        backToMenuButton->setText(QCoreApplication::translate("MainWindow", "Back to Menu", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "YOU WIN", nullptr));
        backToMenuButton_2->setText(QCoreApplication::translate("MainWindow", "Back to Menu", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "YOU LOST", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
