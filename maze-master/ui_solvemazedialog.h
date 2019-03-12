/********************************************************************************
** Form generated from reading UI file 'solvemazedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOLVEMAZEDIALOG_H
#define UI_SOLVEMAZEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SolveMazeDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *solverLabel_;
    QComboBox *solverComboBox_;
    QLabel *timeStepLabel_;
    QSpinBox *timeStepSpinBox_;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SolveMazeDialog)
    {
        if (SolveMazeDialog->objectName().isEmpty())
            SolveMazeDialog->setObjectName(QStringLiteral("SolveMazeDialog"));
        SolveMazeDialog->resize(400, 108);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SolveMazeDialog->sizePolicy().hasHeightForWidth());
        SolveMazeDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(SolveMazeDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        solverLabel_ = new QLabel(SolveMazeDialog);
        solverLabel_->setObjectName(QStringLiteral("solverLabel_"));

        formLayout->setWidget(0, QFormLayout::LabelRole, solverLabel_);

        solverComboBox_ = new QComboBox(SolveMazeDialog);
        solverComboBox_->setObjectName(QStringLiteral("solverComboBox_"));

        formLayout->setWidget(0, QFormLayout::FieldRole, solverComboBox_);

        timeStepLabel_ = new QLabel(SolveMazeDialog);
        timeStepLabel_->setObjectName(QStringLiteral("timeStepLabel_"));

        formLayout->setWidget(1, QFormLayout::LabelRole, timeStepLabel_);

        timeStepSpinBox_ = new QSpinBox(SolveMazeDialog);
        timeStepSpinBox_->setObjectName(QStringLiteral("timeStepSpinBox_"));
        timeStepSpinBox_->setMaximum(1000);
        timeStepSpinBox_->setSingleStep(100);

        formLayout->setWidget(1, QFormLayout::FieldRole, timeStepSpinBox_);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(SolveMazeDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SolveMazeDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SolveMazeDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SolveMazeDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SolveMazeDialog);
    } // setupUi

    void retranslateUi(QDialog *SolveMazeDialog)
    {
        SolveMazeDialog->setWindowTitle(QApplication::translate("SolveMazeDialog", "Dialog", Q_NULLPTR));
        solverLabel_->setText(QApplication::translate("SolveMazeDialog", "Solver :", Q_NULLPTR));
        timeStepLabel_->setText(QApplication::translate("SolveMazeDialog", "Time step :", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SolveMazeDialog: public Ui_SolveMazeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOLVEMAZEDIALOG_H
