/********************************************************************************
** Form generated from reading UI file 'newmazedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWMAZEDIALOG_H
#define UI_NEWMAZEDIALOG_H

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

class Ui_NewMazeDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *nrowLabel_;
    QSpinBox *nrowSpinBox_;
    QLabel *ncolLabel_;
    QSpinBox *ncolSpinBox_;
    QComboBox *generatorComboBox_;
    QLabel *generatorLabel_;
    QLabel *timeStepLabel_;
    QSpinBox *timeStepSpinBox_;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NewMazeDialog)
    {
        if (NewMazeDialog->objectName().isEmpty())
            NewMazeDialog->setObjectName(QStringLiteral("NewMazeDialog"));
        NewMazeDialog->resize(400, 177);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NewMazeDialog->sizePolicy().hasHeightForWidth());
        NewMazeDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(NewMazeDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        nrowLabel_ = new QLabel(NewMazeDialog);
        nrowLabel_->setObjectName(QStringLiteral("nrowLabel_"));

        formLayout->setWidget(0, QFormLayout::LabelRole, nrowLabel_);

        nrowSpinBox_ = new QSpinBox(NewMazeDialog);
        nrowSpinBox_->setObjectName(QStringLiteral("nrowSpinBox_"));
        nrowSpinBox_->setMinimum(1);
        nrowSpinBox_->setMaximum(100);
        nrowSpinBox_->setSingleStep(1);
        nrowSpinBox_->setValue(10);

        formLayout->setWidget(0, QFormLayout::FieldRole, nrowSpinBox_);

        ncolLabel_ = new QLabel(NewMazeDialog);
        ncolLabel_->setObjectName(QStringLiteral("ncolLabel_"));

        formLayout->setWidget(1, QFormLayout::LabelRole, ncolLabel_);

        ncolSpinBox_ = new QSpinBox(NewMazeDialog);
        ncolSpinBox_->setObjectName(QStringLiteral("ncolSpinBox_"));
        ncolSpinBox_->setMinimum(1);
        ncolSpinBox_->setMaximum(100);
        ncolSpinBox_->setSingleStep(1);
        ncolSpinBox_->setValue(10);

        formLayout->setWidget(1, QFormLayout::FieldRole, ncolSpinBox_);

        generatorComboBox_ = new QComboBox(NewMazeDialog);
        generatorComboBox_->setObjectName(QStringLiteral("generatorComboBox_"));

        formLayout->setWidget(2, QFormLayout::FieldRole, generatorComboBox_);

        generatorLabel_ = new QLabel(NewMazeDialog);
        generatorLabel_->setObjectName(QStringLiteral("generatorLabel_"));

        formLayout->setWidget(2, QFormLayout::LabelRole, generatorLabel_);

        timeStepLabel_ = new QLabel(NewMazeDialog);
        timeStepLabel_->setObjectName(QStringLiteral("timeStepLabel_"));

        formLayout->setWidget(3, QFormLayout::LabelRole, timeStepLabel_);

        timeStepSpinBox_ = new QSpinBox(NewMazeDialog);
        timeStepSpinBox_->setObjectName(QStringLiteral("timeStepSpinBox_"));
        timeStepSpinBox_->setMaximum(1000);
        timeStepSpinBox_->setSingleStep(100);

        formLayout->setWidget(3, QFormLayout::FieldRole, timeStepSpinBox_);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(NewMazeDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(NewMazeDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), NewMazeDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NewMazeDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(NewMazeDialog);
    } // setupUi

    void retranslateUi(QDialog *NewMazeDialog)
    {
        NewMazeDialog->setWindowTitle(QApplication::translate("NewMazeDialog", "New Maze", Q_NULLPTR));
        nrowLabel_->setText(QApplication::translate("NewMazeDialog", "Number of rows :", Q_NULLPTR));
        ncolLabel_->setText(QApplication::translate("NewMazeDialog", "Number of collumns :", Q_NULLPTR));
        generatorLabel_->setText(QApplication::translate("NewMazeDialog", "Random maze generator :", Q_NULLPTR));
        timeStepLabel_->setText(QApplication::translate("NewMazeDialog", "Time step :", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NewMazeDialog: public Ui_NewMazeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWMAZEDIALOG_H
