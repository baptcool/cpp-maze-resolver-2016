/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "mazeview.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *bottomWidget_;
    QHBoxLayout *horizontalLayout;
    QPushButton *newMazeButton_;
    QPushButton *solveButton_;
    QPushButton *resetButton_;
    QSpacerItem *horizontalSpacer;
    QPushButton *evaluateButton_;
    MazeView *graphicsView_;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(9);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(9, 9, 9, 9);
        bottomWidget_ = new QWidget(centralwidget);
        bottomWidget_->setObjectName(QStringLiteral("bottomWidget_"));
        bottomWidget_->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout = new QHBoxLayout(bottomWidget_);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        newMazeButton_ = new QPushButton(bottomWidget_);
        newMazeButton_->setObjectName(QStringLiteral("newMazeButton_"));
        newMazeButton_->setFlat(false);

        horizontalLayout->addWidget(newMazeButton_);

        solveButton_ = new QPushButton(bottomWidget_);
        solveButton_->setObjectName(QStringLiteral("solveButton_"));

        horizontalLayout->addWidget(solveButton_);

        resetButton_ = new QPushButton(bottomWidget_);
        resetButton_->setObjectName(QStringLiteral("resetButton_"));

        horizontalLayout->addWidget(resetButton_);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        evaluateButton_ = new QPushButton(bottomWidget_);
        evaluateButton_->setObjectName(QStringLiteral("evaluateButton_"));

        horizontalLayout->addWidget(evaluateButton_);


        verticalLayout->addWidget(bottomWidget_);

        graphicsView_ = new MazeView(centralwidget);
        graphicsView_->setObjectName(QStringLiteral("graphicsView_"));

        verticalLayout->addWidget(graphicsView_);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Maze", Q_NULLPTR));
        newMazeButton_->setText(QApplication::translate("MainWindow", "New Maze", Q_NULLPTR));
        solveButton_->setText(QApplication::translate("MainWindow", "Solve", Q_NULLPTR));
        resetButton_->setText(QApplication::translate("MainWindow", "Reset", Q_NULLPTR));
        evaluateButton_->setText(QApplication::translate("MainWindow", "Evaluate", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
