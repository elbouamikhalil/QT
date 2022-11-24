/********************************************************************************
** Form generated from reading UI file 'equilibreuse.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EQUILIBREUSE_H
#define UI_EQUILIBREUSE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Equilibreuse
{
public:
    QAction *actionNouvelle_Experience;
    QAction *actionOuvrir;
    QAction *actionEnregistrer;
    QAction *actionImporter_mesures_brutes;
    QAction *actionMesures_brutes;
    QAction *actionFormat_CSV;
    QAction *actionFormat_PDF;
    QAction *actionConfigurer;
    QAction *actionAffichage_en_degre;
    QAction *actionAffichage_en_Newton;
    QAction *actionDecalage_origine;
    QAction *actionQuitter;
    QAction *actionParametrer;
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_3;
    QGroupBox *groupeBoxOrigine;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLCDNumber *lcdNumberOrigine;
    QPushButton *buttonPrendreOrigine;
    QGroupBox *groupeBoxConsigneVitesse;
    QPushButton *buttonRazVitesse;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayoutVitesseRotation;
    QLabel *label_VitesseRotation;
    QLineEdit *lineEditVitesseMoteur;
    QLabel *label_Unite1;
    QWidget *layoutWidget_8;
    QHBoxLayout *horizontalLayoutVitesseMoyenne;
    QLabel *label_VitesseMoyenne;
    QLineEdit *lineEditVitesseMoyenne;
    QLabel *label_Unite2;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *buttonLancerMoteur;
    QPushButton *buttonArretMoteur;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_2;
    QDial *buttonFixerConsigneVitesse;
    QLCDNumber *lcdNumberPourcentageVitesse;
    QWidget *widgetImage;
    QWidget *widgetCourbes;
    QGroupBox *groupeBoxAcquisition;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_4;
    QTableWidget *tableWidgetAcquisition;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonLancerAcquisition;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBoxVitesse;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEditVitesseExperience;
    QLabel *label_Unite1_2;
    QMenuBar *menuBar;
    QMenu *menuFichier;
    QMenu *menuExperience;
    QMenu *menuExporter;
    QMenu *menuOption;
    QMenu *menuEquilibreuse;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Equilibreuse)
    {
        if (Equilibreuse->objectName().isEmpty())
            Equilibreuse->setObjectName(QString::fromUtf8("Equilibreuse"));
        Equilibreuse->resize(1396, 805);
        Equilibreuse->setStyleSheet(QString::fromUtf8(""));
        actionNouvelle_Experience = new QAction(Equilibreuse);
        actionNouvelle_Experience->setObjectName(QString::fromUtf8("actionNouvelle_Experience"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/Nouveau.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNouvelle_Experience->setIcon(icon);
        actionOuvrir = new QAction(Equilibreuse);
        actionOuvrir->setObjectName(QString::fromUtf8("actionOuvrir"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/Ouvrir.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOuvrir->setIcon(icon1);
        actionEnregistrer = new QAction(Equilibreuse);
        actionEnregistrer->setObjectName(QString::fromUtf8("actionEnregistrer"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/Enregistrer.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEnregistrer->setIcon(icon2);
        actionImporter_mesures_brutes = new QAction(Equilibreuse);
        actionImporter_mesures_brutes->setObjectName(QString::fromUtf8("actionImporter_mesures_brutes"));
        actionMesures_brutes = new QAction(Equilibreuse);
        actionMesures_brutes->setObjectName(QString::fromUtf8("actionMesures_brutes"));
        actionFormat_CSV = new QAction(Equilibreuse);
        actionFormat_CSV->setObjectName(QString::fromUtf8("actionFormat_CSV"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/Excel.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFormat_CSV->setIcon(icon3);
        actionFormat_PDF = new QAction(Equilibreuse);
        actionFormat_PDF->setObjectName(QString::fromUtf8("actionFormat_PDF"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/LogoPdf.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFormat_PDF->setIcon(icon4);
        actionConfigurer = new QAction(Equilibreuse);
        actionConfigurer->setObjectName(QString::fromUtf8("actionConfigurer"));
        actionAffichage_en_degre = new QAction(Equilibreuse);
        actionAffichage_en_degre->setObjectName(QString::fromUtf8("actionAffichage_en_degre"));
        actionAffichage_en_degre->setCheckable(true);
        actionAffichage_en_degre->setChecked(true);
        actionAffichage_en_Newton = new QAction(Equilibreuse);
        actionAffichage_en_Newton->setObjectName(QString::fromUtf8("actionAffichage_en_Newton"));
        actionAffichage_en_Newton->setCheckable(true);
        actionAffichage_en_Newton->setChecked(true);
        actionDecalage_origine = new QAction(Equilibreuse);
        actionDecalage_origine->setObjectName(QString::fromUtf8("actionDecalage_origine"));
        actionDecalage_origine->setCheckable(true);
        actionDecalage_origine->setChecked(true);
        actionQuitter = new QAction(Equilibreuse);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/Croix.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuitter->setIcon(icon5);
        actionParametrer = new QAction(Equilibreuse);
        actionParametrer->setObjectName(QString::fromUtf8("actionParametrer"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/Parmetres.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionParametrer->setIcon(icon6);
        centralWidget = new QWidget(Equilibreuse);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(8, 9, 341, 741));
        gridLayout_3 = new QGridLayout(layoutWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        groupeBoxOrigine = new QGroupBox(layoutWidget);
        groupeBoxOrigine->setObjectName(QString::fromUtf8("groupeBoxOrigine"));
        groupeBoxOrigine->setMinimumSize(QSize(290, 120));
        groupeBoxOrigine->setMaximumSize(QSize(290, 120));
        gridLayout_2 = new QGridLayout(groupeBoxOrigine);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lcdNumberOrigine = new QLCDNumber(groupeBoxOrigine);
        lcdNumberOrigine->setObjectName(QString::fromUtf8("lcdNumberOrigine"));

        gridLayout->addWidget(lcdNumberOrigine, 0, 0, 1, 1);

        buttonPrendreOrigine = new QPushButton(groupeBoxOrigine);
        buttonPrendreOrigine->setObjectName(QString::fromUtf8("buttonPrendreOrigine"));

        gridLayout->addWidget(buttonPrendreOrigine, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupeBoxOrigine, 0, 0, 1, 1);

        groupeBoxConsigneVitesse = new QGroupBox(layoutWidget);
        groupeBoxConsigneVitesse->setObjectName(QString::fromUtf8("groupeBoxConsigneVitesse"));
        groupeBoxConsigneVitesse->setMinimumSize(QSize(290, 390));
        groupeBoxConsigneVitesse->setMaximumSize(QSize(280, 390));
        buttonRazVitesse = new QPushButton(groupeBoxConsigneVitesse);
        buttonRazVitesse->setObjectName(QString::fromUtf8("buttonRazVitesse"));
        buttonRazVitesse->setGeometry(QRect(10, 310, 271, 61));
        layoutWidget_2 = new QWidget(groupeBoxConsigneVitesse);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 210, 271, 29));
        horizontalLayoutVitesseRotation = new QHBoxLayout(layoutWidget_2);
        horizontalLayoutVitesseRotation->setSpacing(6);
        horizontalLayoutVitesseRotation->setContentsMargins(11, 11, 11, 11);
        horizontalLayoutVitesseRotation->setObjectName(QString::fromUtf8("horizontalLayoutVitesseRotation"));
        horizontalLayoutVitesseRotation->setContentsMargins(0, 0, 0, 0);
        label_VitesseRotation = new QLabel(layoutWidget_2);
        label_VitesseRotation->setObjectName(QString::fromUtf8("label_VitesseRotation"));

        horizontalLayoutVitesseRotation->addWidget(label_VitesseRotation);

        lineEditVitesseMoteur = new QLineEdit(layoutWidget_2);
        lineEditVitesseMoteur->setObjectName(QString::fromUtf8("lineEditVitesseMoteur"));

        horizontalLayoutVitesseRotation->addWidget(lineEditVitesseMoteur);

        label_Unite1 = new QLabel(layoutWidget_2);
        label_Unite1->setObjectName(QString::fromUtf8("label_Unite1"));

        horizontalLayoutVitesseRotation->addWidget(label_Unite1);

        layoutWidget_8 = new QWidget(groupeBoxConsigneVitesse);
        layoutWidget_8->setObjectName(QString::fromUtf8("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(10, 250, 271, 29));
        horizontalLayoutVitesseMoyenne = new QHBoxLayout(layoutWidget_8);
        horizontalLayoutVitesseMoyenne->setSpacing(6);
        horizontalLayoutVitesseMoyenne->setContentsMargins(11, 11, 11, 11);
        horizontalLayoutVitesseMoyenne->setObjectName(QString::fromUtf8("horizontalLayoutVitesseMoyenne"));
        horizontalLayoutVitesseMoyenne->setContentsMargins(0, 0, 0, 0);
        label_VitesseMoyenne = new QLabel(layoutWidget_8);
        label_VitesseMoyenne->setObjectName(QString::fromUtf8("label_VitesseMoyenne"));

        horizontalLayoutVitesseMoyenne->addWidget(label_VitesseMoyenne);

        lineEditVitesseMoyenne = new QLineEdit(layoutWidget_8);
        lineEditVitesseMoyenne->setObjectName(QString::fromUtf8("lineEditVitesseMoyenne"));

        horizontalLayoutVitesseMoyenne->addWidget(lineEditVitesseMoyenne);

        label_Unite2 = new QLabel(layoutWidget_8);
        label_Unite2->setObjectName(QString::fromUtf8("label_Unite2"));

        horizontalLayoutVitesseMoyenne->addWidget(label_Unite2);

        layoutWidget_3 = new QWidget(groupeBoxConsigneVitesse);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 130, 271, 61));
        horizontalLayout = new QHBoxLayout(layoutWidget_3);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        buttonLancerMoteur = new QPushButton(layoutWidget_3);
        buttonLancerMoteur->setObjectName(QString::fromUtf8("buttonLancerMoteur"));

        horizontalLayout->addWidget(buttonLancerMoteur);

        buttonArretMoteur = new QPushButton(layoutWidget_3);
        buttonArretMoteur->setObjectName(QString::fromUtf8("buttonArretMoteur"));

        horizontalLayout->addWidget(buttonArretMoteur);

        layoutWidget_4 = new QWidget(groupeBoxConsigneVitesse);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(10, 40, 271, 81));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        buttonFixerConsigneVitesse = new QDial(layoutWidget_4);
        buttonFixerConsigneVitesse->setObjectName(QString::fromUtf8("buttonFixerConsigneVitesse"));
        buttonFixerConsigneVitesse->setMaximum(100);

        horizontalLayout_2->addWidget(buttonFixerConsigneVitesse);

        lcdNumberPourcentageVitesse = new QLCDNumber(layoutWidget_4);
        lcdNumberPourcentageVitesse->setObjectName(QString::fromUtf8("lcdNumberPourcentageVitesse"));

        horizontalLayout_2->addWidget(lcdNumberPourcentageVitesse);


        gridLayout_3->addWidget(groupeBoxConsigneVitesse, 1, 0, 1, 1);

        widgetImage = new QWidget(layoutWidget);
        widgetImage->setObjectName(QString::fromUtf8("widgetImage"));
        widgetImage->setMinimumSize(QSize(290, 170));
        widgetImage->setMaximumSize(QSize(290, 170));
        widgetImage->setStyleSheet(QString::fromUtf8("Border-image: url(:/images/Maquette.png);"));

        gridLayout_3->addWidget(widgetImage, 2, 0, 1, 1);

        widgetCourbes = new QWidget(centralWidget);
        widgetCourbes->setObjectName(QString::fromUtf8("widgetCourbes"));
        widgetCourbes->setGeometry(QRect(348, 139, 890, 609));
        widgetCourbes->setMinimumSize(QSize(890, 600));
        groupeBoxAcquisition = new QGroupBox(centralWidget);
        groupeBoxAcquisition->setObjectName(QString::fromUtf8("groupeBoxAcquisition"));
        groupeBoxAcquisition->setGeometry(QRect(350, 10, 890, 130));
        groupeBoxAcquisition->setMinimumSize(QSize(890, 130));
        groupeBoxAcquisition->setMaximumSize(QSize(890, 130));
        layoutWidget_5 = new QWidget(groupeBoxAcquisition);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(10, 30, 861, 92));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        tableWidgetAcquisition = new QTableWidget(layoutWidget_5);
        if (tableWidgetAcquisition->columnCount() < 4)
            tableWidgetAcquisition->setColumnCount(4);
        QFont font;
        font.setBold(true);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        tableWidgetAcquisition->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        tableWidgetAcquisition->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        tableWidgetAcquisition->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font);
        tableWidgetAcquisition->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (tableWidgetAcquisition->rowCount() < 2)
            tableWidgetAcquisition->setRowCount(2);
        QBrush brush(QColor(0, 0, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        __qtablewidgetitem4->setFont(font);
        __qtablewidgetitem4->setForeground(brush);
        tableWidgetAcquisition->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QBrush brush1(QColor(255, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font);
        __qtablewidgetitem5->setForeground(brush1);
        tableWidgetAcquisition->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QBrush brush2(QColor(0, 0, 255, 255));
        brush2.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem6->setFont(font);
        __qtablewidgetitem6->setForeground(brush2);
        tableWidgetAcquisition->setItem(0, 0, __qtablewidgetitem6);
        QBrush brush3(QColor(0, 0, 255, 255));
        brush3.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem7->setFont(font);
        __qtablewidgetitem7->setForeground(brush3);
        tableWidgetAcquisition->setItem(0, 1, __qtablewidgetitem7);
        QBrush brush4(QColor(0, 0, 255, 255));
        brush4.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem8->setFont(font);
        __qtablewidgetitem8->setForeground(brush4);
        tableWidgetAcquisition->setItem(0, 2, __qtablewidgetitem8);
        QBrush brush5(QColor(0, 0, 255, 255));
        brush5.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem9->setFont(font);
        __qtablewidgetitem9->setForeground(brush5);
        tableWidgetAcquisition->setItem(0, 3, __qtablewidgetitem9);
        QBrush brush6(QColor(255, 0, 0, 255));
        brush6.setStyle(Qt::NoBrush);
        QBrush brush7(QColor(0, 0, 0, 255));
        brush7.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem10->setFont(font);
        __qtablewidgetitem10->setBackground(brush7);
        __qtablewidgetitem10->setForeground(brush6);
        tableWidgetAcquisition->setItem(1, 0, __qtablewidgetitem10);
        QBrush brush8(QColor(255, 0, 0, 255));
        brush8.setStyle(Qt::NoBrush);
        QBrush brush9(QColor(0, 0, 0, 255));
        brush9.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem11->setFont(font);
        __qtablewidgetitem11->setBackground(brush9);
        __qtablewidgetitem11->setForeground(brush8);
        tableWidgetAcquisition->setItem(1, 1, __qtablewidgetitem11);
        QBrush brush10(QColor(255, 0, 0, 255));
        brush10.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem12->setFont(font);
        __qtablewidgetitem12->setForeground(brush10);
        tableWidgetAcquisition->setItem(1, 2, __qtablewidgetitem12);
        QBrush brush11(QColor(255, 0, 0, 255));
        brush11.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem13->setFont(font);
        __qtablewidgetitem13->setForeground(brush11);
        tableWidgetAcquisition->setItem(1, 3, __qtablewidgetitem13);
        tableWidgetAcquisition->setObjectName(QString::fromUtf8("tableWidgetAcquisition"));
        tableWidgetAcquisition->setMinimumSize(QSize(455, 85));
        tableWidgetAcquisition->setMaximumSize(QSize(455, 85));
        tableWidgetAcquisition->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidgetAcquisition->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidgetAcquisition->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetAcquisition->setTabKeyNavigation(false);
        tableWidgetAcquisition->setProperty("showDropIndicator", QVariant(false));
        tableWidgetAcquisition->setDragDropOverwriteMode(false);

        horizontalLayout_4->addWidget(tableWidgetAcquisition);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        buttonLancerAcquisition = new QPushButton(layoutWidget_5);
        buttonLancerAcquisition->setObjectName(QString::fromUtf8("buttonLancerAcquisition"));
        buttonLancerAcquisition->setMinimumSize(QSize(130, 90));
        buttonLancerAcquisition->setMaximumSize(QSize(130, 90));

        horizontalLayout_4->addWidget(buttonLancerAcquisition);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        groupBoxVitesse = new QGroupBox(layoutWidget_5);
        groupBoxVitesse->setObjectName(QString::fromUtf8("groupBoxVitesse"));
        groupBoxVitesse->setMinimumSize(QSize(200, 90));
        groupBoxVitesse->setMaximumSize(QSize(200, 90));
        layoutWidget_6 = new QWidget(groupBoxVitesse);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(10, 40, 171, 30));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        lineEditVitesseExperience = new QLineEdit(layoutWidget_6);
        lineEditVitesseExperience->setObjectName(QString::fromUtf8("lineEditVitesseExperience"));
        lineEditVitesseExperience->setMaximumSize(QSize(160, 40));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        lineEditVitesseExperience->setFont(font1);
        lineEditVitesseExperience->setAcceptDrops(false);
        lineEditVitesseExperience->setAlignment(Qt::AlignCenter);
        lineEditVitesseExperience->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEditVitesseExperience);

        label_Unite1_2 = new QLabel(layoutWidget_6);
        label_Unite1_2->setObjectName(QString::fromUtf8("label_Unite1_2"));

        horizontalLayout_3->addWidget(label_Unite1_2);


        horizontalLayout_4->addWidget(groupBoxVitesse);

        Equilibreuse->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Equilibreuse);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1396, 21));
        menuFichier = new QMenu(menuBar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        menuExperience = new QMenu(menuBar);
        menuExperience->setObjectName(QString::fromUtf8("menuExperience"));
        menuExporter = new QMenu(menuExperience);
        menuExporter->setObjectName(QString::fromUtf8("menuExporter"));
        menuOption = new QMenu(menuExperience);
        menuOption->setObjectName(QString::fromUtf8("menuOption"));
        menuEquilibreuse = new QMenu(menuBar);
        menuEquilibreuse->setObjectName(QString::fromUtf8("menuEquilibreuse"));
        Equilibreuse->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Equilibreuse);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Equilibreuse->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Equilibreuse);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Equilibreuse->setStatusBar(statusBar);

        menuBar->addAction(menuFichier->menuAction());
        menuBar->addAction(menuExperience->menuAction());
        menuBar->addAction(menuEquilibreuse->menuAction());
        menuFichier->addAction(actionNouvelle_Experience);
        menuFichier->addAction(actionOuvrir);
        menuFichier->addAction(actionEnregistrer);
        menuFichier->addSeparator();
        menuFichier->addAction(actionQuitter);
        menuExperience->addAction(actionImporter_mesures_brutes);
        menuExperience->addAction(menuExporter->menuAction());
        menuExperience->addSeparator();
        menuExperience->addAction(actionConfigurer);
        menuExperience->addAction(menuOption->menuAction());
        menuExporter->addAction(actionMesures_brutes);
        menuExporter->addAction(actionFormat_CSV);
        menuExporter->addAction(actionFormat_PDF);
        menuOption->addAction(actionAffichage_en_degre);
        menuOption->addAction(actionAffichage_en_Newton);
        menuOption->addAction(actionDecalage_origine);
        menuEquilibreuse->addAction(actionParametrer);
        mainToolBar->addAction(actionQuitter);
        mainToolBar->addAction(actionNouvelle_Experience);
        mainToolBar->addAction(actionOuvrir);
        mainToolBar->addAction(actionEnregistrer);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionFormat_PDF);
        mainToolBar->addAction(actionFormat_CSV);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionParametrer);

        retranslateUi(Equilibreuse);
        QObject::connect(actionQuitter, &QAction::triggered, Equilibreuse, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(Equilibreuse);
    } // setupUi

    void retranslateUi(QMainWindow *Equilibreuse)
    {
        Equilibreuse->setWindowTitle(QCoreApplication::translate("Equilibreuse", "Equilibreuse", nullptr));
        actionNouvelle_Experience->setText(QCoreApplication::translate("Equilibreuse", "Nouvelle exp\303\251rience", nullptr));
        actionOuvrir->setText(QCoreApplication::translate("Equilibreuse", "Ouvrir", nullptr));
        actionEnregistrer->setText(QCoreApplication::translate("Equilibreuse", "Enregistrer", nullptr));
        actionImporter_mesures_brutes->setText(QCoreApplication::translate("Equilibreuse", "Importer mesures brutes", nullptr));
        actionMesures_brutes->setText(QCoreApplication::translate("Equilibreuse", "Mesures brutes", nullptr));
        actionFormat_CSV->setText(QCoreApplication::translate("Equilibreuse", "Format CSV", nullptr));
        actionFormat_PDF->setText(QCoreApplication::translate("Equilibreuse", "Format PDF", nullptr));
        actionConfigurer->setText(QCoreApplication::translate("Equilibreuse", "Configurer", nullptr));
        actionAffichage_en_degre->setText(QCoreApplication::translate("Equilibreuse", "Affichage en degr\303\251", nullptr));
        actionAffichage_en_Newton->setText(QCoreApplication::translate("Equilibreuse", "Affichage en Newton", nullptr));
        actionDecalage_origine->setText(QCoreApplication::translate("Equilibreuse", "D\303\251calage origine", nullptr));
        actionQuitter->setText(QCoreApplication::translate("Equilibreuse", "Quitter", nullptr));
        actionParametrer->setText(QCoreApplication::translate("Equilibreuse", "Param\303\251trer", nullptr));
        groupeBoxOrigine->setTitle(QCoreApplication::translate("Equilibreuse", "Position origine", nullptr));
        buttonPrendreOrigine->setText(QCoreApplication::translate("Equilibreuse", "Prendre\n"
"l'origine", nullptr));
        groupeBoxConsigneVitesse->setTitle(QCoreApplication::translate("Equilibreuse", "Consigne de vitesse (en %)", nullptr));
        buttonRazVitesse->setText(QCoreApplication::translate("Equilibreuse", "RAZ vitesse moyenne", nullptr));
        label_VitesseRotation->setText(QCoreApplication::translate("Equilibreuse", "Vitesse de rotation :", nullptr));
        label_Unite1->setText(QCoreApplication::translate("Equilibreuse", "trs/min   ", nullptr));
        label_VitesseMoyenne->setText(QCoreApplication::translate("Equilibreuse", "Vitesse moyenne :   ", nullptr));
        label_Unite2->setText(QCoreApplication::translate("Equilibreuse", "trs/min   ", nullptr));
        buttonLancerMoteur->setText(QCoreApplication::translate("Equilibreuse", "Lancer Moteur", nullptr));
        buttonArretMoteur->setText(QCoreApplication::translate("Equilibreuse", "Arr\303\252ter Moteur", nullptr));
        groupeBoxAcquisition->setTitle(QCoreApplication::translate("Equilibreuse", "Acquisition", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetAcquisition->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Equilibreuse", "Effort Max (N)", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetAcquisition->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Equilibreuse", "D\303\251phasage (\302\260)", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetAcquisition->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Equilibreuse", "Effort \303\240 0\302\260   (N)", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetAcquisition->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Equilibreuse", "Effort \303\240 90\302\260 (N)", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetAcquisition->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Equilibreuse", "Palier A", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetAcquisition->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Equilibreuse", "Palier O", nullptr));

        const bool __sortingEnabled = tableWidgetAcquisition->isSortingEnabled();
        tableWidgetAcquisition->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetAcquisition->item(0, 0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("Equilibreuse", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetAcquisition->item(0, 1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("Equilibreuse", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidgetAcquisition->item(0, 2);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("Equilibreuse", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidgetAcquisition->item(0, 3);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("Equilibreuse", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidgetAcquisition->item(1, 0);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("Equilibreuse", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidgetAcquisition->item(1, 1);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("Equilibreuse", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidgetAcquisition->item(1, 2);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("Equilibreuse", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidgetAcquisition->item(1, 3);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("Equilibreuse", "0", nullptr));
        tableWidgetAcquisition->setSortingEnabled(__sortingEnabled);

        buttonLancerAcquisition->setText(QCoreApplication::translate("Equilibreuse", "Figer\n"
"Acquisition", nullptr));
        groupBoxVitesse->setTitle(QCoreApplication::translate("Equilibreuse", "Vitesse de l'exp\303\251rience ", nullptr));
        label_Unite1_2->setText(QCoreApplication::translate("Equilibreuse", "trs/min   ", nullptr));
        menuFichier->setTitle(QCoreApplication::translate("Equilibreuse", "Fichier", nullptr));
        menuExperience->setTitle(QCoreApplication::translate("Equilibreuse", "Exp\303\251rience", nullptr));
        menuExporter->setTitle(QCoreApplication::translate("Equilibreuse", "Exporter", nullptr));
        menuOption->setTitle(QCoreApplication::translate("Equilibreuse", "Option", nullptr));
        menuEquilibreuse->setTitle(QCoreApplication::translate("Equilibreuse", "Equilibreuse", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Equilibreuse: public Ui_Equilibreuse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EQUILIBREUSE_H
