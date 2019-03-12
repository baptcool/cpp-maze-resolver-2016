/********************************************************************************
** Form generated from reading UI file 'evaluationdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVALUATIONDIALOG_H
#define UI_EVALUATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_evaluationdialog
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *tableView;

    void setupUi(QDialog *evaluationdialog)
    {
        if (evaluationdialog->objectName().isEmpty())
            evaluationdialog->setObjectName(QStringLiteral("evaluationdialog"));
        evaluationdialog->resize(1000, 300);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(evaluationdialog->sizePolicy().hasHeightForWidth());
        evaluationdialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(evaluationdialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableView = new QTableView(evaluationdialog);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);

        verticalLayout->addWidget(tableView);


        retranslateUi(evaluationdialog);

        QMetaObject::connectSlotsByName(evaluationdialog);
    } // setupUi

    void retranslateUi(QDialog *evaluationdialog)
    {
        evaluationdialog->setWindowTitle(QApplication::translate("evaluationdialog", "Evaluation Report", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class evaluationdialog: public Ui_evaluationdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVALUATIONDIALOG_H
