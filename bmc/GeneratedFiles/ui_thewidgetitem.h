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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TheWidgetItem
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QGridLayout *gridLayout;
    QPushButton *pressThisBtn;
    QPushButton *btnColor;
    QSlider *sldrOpacity;
    QLabel *label;

    void setupUi(QWidget *TheWidgetItem)
    {
        if (TheWidgetItem->objectName().isEmpty())
            TheWidgetItem->setObjectName(QStringLiteral("TheWidgetItem"));
        TheWidgetItem->resize(400, 46);
        formLayoutWidget = new QWidget(TheWidgetItem);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(0, 0, 391, 41));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pressThisBtn = new QPushButton(formLayoutWidget);
        pressThisBtn->setObjectName(QStringLiteral("pressThisBtn"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pressThisBtn->sizePolicy().hasHeightForWidth());
        pressThisBtn->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral("eye_on.png"), QSize(), QIcon::Normal, QIcon::Off);
        pressThisBtn->setIcon(icon);

        gridLayout->addWidget(pressThisBtn, 0, 0, 1, 1);

        btnColor = new QPushButton(formLayoutWidget);
        btnColor->setObjectName(QStringLiteral("btnColor"));
        sizePolicy.setHeightForWidth(btnColor->sizePolicy().hasHeightForWidth());
        btnColor->setSizePolicy(sizePolicy);
        btnColor->setAutoDefault(true);
        btnColor->setFlat(false);

        gridLayout->addWidget(btnColor, 0, 1, 1, 1);

        sldrOpacity = new QSlider(formLayoutWidget);
        sldrOpacity->setObjectName(QStringLiteral("sldrOpacity"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(sldrOpacity->sizePolicy().hasHeightForWidth());
        sldrOpacity->setSizePolicy(sizePolicy1);
        sldrOpacity->setCursor(QCursor(Qt::SizeHorCursor));
        sldrOpacity->setMaximum(99);
        sldrOpacity->setSingleStep(1);
        sldrOpacity->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sldrOpacity, 0, 2, 1, 1);


        formLayout->setLayout(0, QFormLayout::LabelRole, gridLayout);

        label = new QLabel(formLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::FieldRole, label);


        retranslateUi(TheWidgetItem);

        btnColor->setDefault(false);


        QMetaObject::connectSlotsByName(TheWidgetItem);
    } // setupUi

    void retranslateUi(QWidget *TheWidgetItem)
    {
        TheWidgetItem->setWindowTitle(QApplication::translate("TheWidgetItem", "Form", Q_NULLPTR));
        pressThisBtn->setText(QString());
        btnColor->setText(QString());
        label->setText(QApplication::translate("TheWidgetItem", "label", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TheWidgetItem: public Ui_TheWidgetItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEWIDGETITEM_H
