/********************************************************************************
** Form generated from reading UI file 'dialogparametrageequilibreuse.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGPARAMETRAGEEQUILIBREUSE_H
#define UI_DIALOGPARAMETRAGEEQUILIBREUSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogParametrageEquilibreuse
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidgetJauges;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QTableWidget *tableWidgetConditionneur;
    QTableWidget *tableWidgetFiltre;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditEtablissement;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditVitesse;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButtonEnregistrer;
    QPushButton *pushButtonAnnuler;

    void setupUi(QDialog *DialogParametrageEquilibreuse)
    {
        if (DialogParametrageEquilibreuse->objectName().isEmpty())
            DialogParametrageEquilibreuse->setObjectName(QString::fromUtf8("DialogParametrageEquilibreuse"));
        DialogParametrageEquilibreuse->resize(966, 680);
        layoutWidget = new QWidget(DialogParametrageEquilibreuse);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 40, 901, 391));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableWidgetJauges = new QTableWidget(layoutWidget);
        if (tableWidgetJauges->columnCount() < 5)
            tableWidgetJauges->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetJauges->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetJauges->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetJauges->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetJauges->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetJauges->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableWidgetJauges->rowCount() < 2)
            tableWidgetJauges->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetJauges->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetJauges->setVerticalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetJauges->setItem(0, 0, __qtablewidgetitem7);
        tableWidgetJauges->setObjectName(QString::fromUtf8("tableWidgetJauges"));
        QFont font;
        font.setPointSize(12);
        tableWidgetJauges->setFont(font);
        tableWidgetJauges->setStyleSheet(QString::fromUtf8(""));
        tableWidgetJauges->setAlternatingRowColors(false);
        tableWidgetJauges->setTextElideMode(Qt::ElideMiddle);

        verticalLayout->addWidget(tableWidgetJauges);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        tableWidgetConditionneur = new QTableWidget(layoutWidget);
        if (tableWidgetConditionneur->columnCount() < 3)
            tableWidgetConditionneur->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidgetConditionneur->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidgetConditionneur->setHorizontalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidgetConditionneur->setHorizontalHeaderItem(2, __qtablewidgetitem10);
        if (tableWidgetConditionneur->rowCount() < 2)
            tableWidgetConditionneur->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidgetConditionneur->setVerticalHeaderItem(0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidgetConditionneur->setVerticalHeaderItem(1, __qtablewidgetitem12);
        tableWidgetConditionneur->setObjectName(QString::fromUtf8("tableWidgetConditionneur"));
        tableWidgetConditionneur->setTextElideMode(Qt::ElideMiddle);

        verticalLayout->addWidget(tableWidgetConditionneur);

        tableWidgetFiltre = new QTableWidget(layoutWidget);
        if (tableWidgetFiltre->columnCount() < 4)
            tableWidgetFiltre->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidgetFiltre->setHorizontalHeaderItem(0, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidgetFiltre->setHorizontalHeaderItem(1, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidgetFiltre->setHorizontalHeaderItem(2, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidgetFiltre->setHorizontalHeaderItem(3, __qtablewidgetitem16);
        if (tableWidgetFiltre->rowCount() < 2)
            tableWidgetFiltre->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidgetFiltre->setVerticalHeaderItem(0, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidgetFiltre->setVerticalHeaderItem(1, __qtablewidgetitem18);
        tableWidgetFiltre->setObjectName(QString::fromUtf8("tableWidgetFiltre"));
        tableWidgetFiltre->setTextElideMode(Qt::ElideMiddle);

        verticalLayout->addWidget(tableWidgetFiltre);

        layoutWidget1 = new QWidget(DialogParametrageEquilibreuse);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 580, 511, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEditEtablissement = new QLineEdit(layoutWidget1);
        lineEditEtablissement->setObjectName(QString::fromUtf8("lineEditEtablissement"));

        horizontalLayout->addWidget(lineEditEtablissement);

        layoutWidget2 = new QWidget(DialogParametrageEquilibreuse);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(30, 620, 511, 29));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEditVitesse = new QLineEdit(layoutWidget2);
        lineEditVitesse->setObjectName(QString::fromUtf8("lineEditVitesse"));

        horizontalLayout_2->addWidget(lineEditVitesse);

        layoutWidget3 = new QWidget(DialogParametrageEquilibreuse);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(560, 590, 374, 52));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        pushButtonEnregistrer = new QPushButton(layoutWidget3);
        pushButtonEnregistrer->setObjectName(QString::fromUtf8("pushButtonEnregistrer"));
        pushButtonEnregistrer->setMinimumSize(QSize(120, 50));
        pushButtonEnregistrer->setMaximumSize(QSize(150, 50));

        horizontalLayout_6->addWidget(pushButtonEnregistrer);

        pushButtonAnnuler = new QPushButton(layoutWidget3);
        pushButtonAnnuler->setObjectName(QString::fromUtf8("pushButtonAnnuler"));
        pushButtonAnnuler->setMinimumSize(QSize(120, 50));
        pushButtonAnnuler->setMaximumSize(QSize(150, 50));

        horizontalLayout_6->addWidget(pushButtonAnnuler);


        retranslateUi(DialogParametrageEquilibreuse);
        QObject::connect(pushButtonAnnuler, &QPushButton::clicked, DialogParametrageEquilibreuse, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(DialogParametrageEquilibreuse);
    } // setupUi

    void retranslateUi(QDialog *DialogParametrageEquilibreuse)
    {
        DialogParametrageEquilibreuse->setWindowTitle(QCoreApplication::translate("DialogParametrageEquilibreuse", "Param\303\250trage de l'\303\251quilibreuse", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetJauges->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("DialogParametrageEquilibreuse", "Mod\303\250le", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetJauges->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("DialogParametrageEquilibreuse", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetJauges->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("DialogParametrageEquilibreuse", "num\303\251ro de s\303\251rie", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetJauges->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("DialogParametrageEquilibreuse", "Capacit\303\251 en lbs", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetJauges->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("DialogParametrageEquilibreuse", "sensibilit\303\251 en mV/V", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetJauges->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("DialogParametrageEquilibreuse", "Jauge de contrainte A", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetJauges->verticalHeaderItem(1);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("DialogParametrageEquilibreuse", "Jauge de contrainte O", nullptr));

        const bool __sortingEnabled = tableWidgetJauges->isSortingEnabled();
        tableWidgetJauges->setSortingEnabled(false);
        tableWidgetJauges->setSortingEnabled(__sortingEnabled);

        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetConditionneur->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("DialogParametrageEquilibreuse", "Tension pleine echelle en V", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidgetConditionneur->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("DialogParametrageEquilibreuse", "Calibrage en mV", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidgetConditionneur->horizontalHeaderItem(2);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("DialogParametrageEquilibreuse", "Tension calibrage en V", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidgetConditionneur->verticalHeaderItem(0);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("DialogParametrageEquilibreuse", "Conditionneur A", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidgetConditionneur->verticalHeaderItem(1);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("DialogParametrageEquilibreuse", "Conditionneur O", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidgetFiltre->horizontalHeaderItem(0);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("DialogParametrageEquilibreuse", "Coefficient att\303\251nuation", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidgetFiltre->horizontalHeaderItem(1);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("DialogParametrageEquilibreuse", "Ordonn\303\251e att\303\251nuation", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidgetFiltre->horizontalHeaderItem(2);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("DialogParametrageEquilibreuse", "Coefficient d\303\251phasage", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidgetFiltre->horizontalHeaderItem(3);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("DialogParametrageEquilibreuse", "Ordonn\303\251e d\303\251phasage", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidgetFiltre->verticalHeaderItem(0);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("DialogParametrageEquilibreuse", "Filtre A", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidgetFiltre->verticalHeaderItem(1);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("DialogParametrageEquilibreuse", "Filtre O", nullptr));
        label->setText(QCoreApplication::translate("DialogParametrageEquilibreuse", "Nom de l'\303\251tablissement :", nullptr));
        lineEditEtablissement->setText(QCoreApplication::translate("DialogParametrageEquilibreuse", "Lyc\303\251e Touchard-Washington", nullptr));
        label_2->setText(QCoreApplication::translate("DialogParametrageEquilibreuse", "Vitesse maximale du moteur en tours par minute :", nullptr));
        lineEditVitesse->setText(QCoreApplication::translate("DialogParametrageEquilibreuse", "2000", nullptr));
        pushButtonEnregistrer->setText(QCoreApplication::translate("DialogParametrageEquilibreuse", "Enregistrer", nullptr));
        pushButtonAnnuler->setText(QCoreApplication::translate("DialogParametrageEquilibreuse", "Annuler", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogParametrageEquilibreuse: public Ui_DialogParametrageEquilibreuse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGPARAMETRAGEEQUILIBREUSE_H
