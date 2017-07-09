/********************************************************************************
** Form generated from reading UI file 'thewidgetitem.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THEWIDGETITEM_H
#define UI_THEWIDGETITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TheWidgetItem
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QPushButton *pressThisBtn;
    QLabel *label;

    void setupUi(QWidget *TheWidgetItem)
    {
        if (TheWidgetItem->objectName().isEmpty())
            TheWidgetItem->setObjectName(QStringLiteral("TheWidgetItem"));
        TheWidgetItem->resize(401, 27);
        formLayoutWidget = new QWidget(TheWidgetItem);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(0, 0, 291, 26));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        pressThisBtn = new QPushButton(formLayoutWidget);
        pressThisBtn->setObjectName(QStringLiteral("pressThisBtn"));
        QIcon icon;
        icon.addFile(QStringLiteral("../eye_on.png"), QSize(), QIcon::Normal, QIcon::Off);
        pressThisBtn->setIcon(icon);

        formLayout->setWidget(0, QFormLayout::LabelRole, pressThisBtn);

        label = new QLabel(formLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::FieldRole, label);


        retranslateUi(TheWidgetItem);

        QMetaObject::connectSlotsByName(TheWidgetItem);
    } // setupUi

    void retranslateUi(QWidget *TheWidgetItem)
    {
        TheWidgetItem->setWindowTitle(QApplication::translate("TheWidgetItem", "Form", Q_NULLPTR));
        pressThisBtn->setText(QString());
        label->setText(QApplication::translate("TheWidgetItem", "label", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TheWidgetItem: public Ui_TheWidgetItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEWIDGETITEM_H
