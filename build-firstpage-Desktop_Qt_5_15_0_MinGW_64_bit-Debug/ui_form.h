/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QToolBox *toolBox;
    QWidget *page;
    QWidget *page_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QToolButton *toolButton;
    QComboBox *comboBox;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(1143, 741);
        pushButton = new QPushButton(Form);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 200, 93, 28));
        groupBox = new QGroupBox(Form);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(500, 180, 441, 441));
        toolBox = new QToolBox(Form);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setGeometry(QRect(40, 270, 85, 147));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 85, 85));
        toolBox->addItem(page, QString::fromUtf8("Page 1"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 85, 85));
        toolBox->addItem(page_2, QString::fromUtf8("Page 2"));
        scrollArea = new QScrollArea(Form);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(270, 340, 120, 87));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 118, 85));
        scrollArea->setWidget(scrollAreaWidgetContents);
        toolButton = new QToolButton(Form);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(120, 480, 171, 71));
        comboBox = new QComboBox(Form);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(420, 320, 73, 22));

        retranslateUi(Form);

        toolBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Form", "PushButton", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Form", "GroupBox", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QCoreApplication::translate("Form", "Page 1", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QCoreApplication::translate("Form", "Page 2", nullptr));
        toolButton->setText(QCoreApplication::translate("Form", "...", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Form", "New Item", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Form", "New Item", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Form", "New Item", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("Form", "New Item", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("Form", "New Item", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("Form", "New Item", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("Form", "New Item", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
