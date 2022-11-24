#include <QFileInfo>
#include <QSettings>
#include <QDebug>
#include <QDataStream>
#include <QPointF>


#include "experience.h"

Experience::Experience(QObject *parent) : QObject(parent)
  , vitesseMaxi(0)
  , nbEchantillons(0)
  , origine(0)
  , vitesse(0)
  , mesuresBrutes(nullptr)
{
    LireFichierIni();
}

void Experience::LireFichierIni()
{
    QString nomFichierIni = "equilibreuse.ini";
    QFileInfo fichierIni(nomFichierIni);
    QString modele;
    QString date;
    QString numeroDeSerie;
    double capacite;
    double sensibilite;
    if (fichierIni.exists() && fichierIni.isFile())
    {
        QSettings paramsFichier(nomFichierIni, QSettings::IniFormat);

        paliers[PALIER_A].jauge.capacite=paramsFichier.value("JaugeA/capacite").toInt();
        paliers[PALIER_A].jauge.date=paramsFichier.value("JaugeA/date").toString();
        paliers[PALIER_A].jauge.modele=paramsFichier.value("JaugeA/modele").toString();
        paliers[PALIER_A].jauge.sensibilite=paramsFichier.value("JaugeA/sensibilite").toDouble();
        paliers[PALIER_A].jauge.numeroDeSerie=paramsFichier.value("JaugeA/serie").toString();

        paliers[PALIER_O].jauge.capacite=paramsFichier.value("JaugeO/capacite").toDouble();
        paliers[PALIER_O].jauge.date=paramsFichier.value("JaugeO/date").toString();
        paliers[PALIER_O].jauge.modele=paramsFichier.value("JaugeO/modele").toString();
        paliers[PALIER_O].jauge.sensibilite=paramsFichier.value("JaugeO/sensibilite").toDouble();
        paliers[PALIER_O].jauge.numeroDeSerie=paramsFichier.value("JaugeO/serie").toString();
    }
    else
    {
        // si le fichier n’existe pas, il est créé avec les valeurs par défaut
        // il est ensuite enregistré
        qDebug()<< "fichier ini non crée";
        paliers[PALIER_A].jauge.capacite=25;
        paliers[PALIER_A].jauge.date="09-22-1998";
        paliers[PALIER_A].jauge.modele="MB-25";
        paliers[PALIER_A].jauge.sensibilite=3.348;
        paliers[PALIER_A].jauge.numeroDeSerie="C30629";

        paliers[PALIER_O].jauge.capacite=25;
        paliers[PALIER_O].jauge.date="10-05-1998";
        paliers[PALIER_O].jauge.modele="MB-25";
        paliers[PALIER_O].jauge.sensibilite=3.328;
        paliers[PALIER_O].jauge.numeroDeSerie="C30637";
        EnregistreFichierIni(paliers);
    }
}

void Experience::EnregistreFichierIni(const typePalier _paliers[])
{
    QString nomFichierIni = "equilibreuse.ini";
    QFileInfo fichierIni(nomFichierIni);
    QSettings paramsFichier(nomFichierIni, QSettings::IniFormat);
    paramsFichier.beginGroup("JaugeA");
    paramsFichier.setValue("capacite",paliers[PALIER_A].jauge.capacite);
    paramsFichier.setValue("date",paliers[PALIER_A].jauge.date);
    paramsFichier.setValue("modele",paliers[PALIER_A].jauge.modele);
    paramsFichier.setValue("sensibilite",paliers[PALIER_A].jauge.sensibilite);
    paramsFichier.setValue("serie",paliers[PALIER_A].jauge.numeroDeSerie);
    paramsFichier.endGroup();

    paramsFichier.beginGroup("JaugeB");
    paramsFichier.setValue("capacite",paliers[PALIER_O].jauge.capacite);
    paramsFichier.setValue("date",paliers[PALIER_O].jauge.date);
    paramsFichier.setValue("modele",paliers[PALIER_O].jauge.modele);
    paramsFichier.setValue("sensibilite",paliers[PALIER_O].jauge.sensibilite);
    paramsFichier.setValue("serie",paliers[PALIER_O].jauge.numeroDeSerie);
    paramsFichier.endGroup();

}

typePalier *Experience::ObtenirCarateristiquesPaliers()
{
    return paliers;
}

void Experience::LireMesuresBrutes(QString &_nomFichier)
{
    // à completer dans le TD2
}

void Experience::InitiliserCourbes()
{
    int indiceFin = nbEchantillons / 2 ;
    int indiceA = 0;
    int indiceO = nbEchantillons /2 ;

    courbeA.clear();
    courbeO.clear();
    PointDeCourbe unPoint;
    for(int i = 0 ; i < indiceFin ; i++)
    {
        unPoint.setX(i);
        unPoint.setY(mesuresBrutes[indiceA++]);
        courbeA.append(unPoint);
        unPoint.setY(mesuresBrutes[indiceO++]);
        courbeO.append(unPoint);
    }
}

QList<QPointF> *Experience::ObtenirCourbeA()
{
    return (QList<QPointF>*) &courbeA;
}

QList<QPointF> *Experience::ObtenirCourbeO()
{
    return (QList<QPointF>*) &courbeO;
}

void Experience::ObtenirTypeAffichage(bool &_newton, bool &_pointCodeur)
{
    _newton = false;
    _pointCodeur = true;
}

/**
 * @brief Experience::RechercherEffortMax
 * @param courbe définit sur qu'elle courbe la recherche est effectuée 'A' ou 'O'
 * @return Le point possedant la valeur de l'effort le plus grand
 * @details Recherche le point dont l'amplitude est la plus grande sur l'une des 2 courbes.
 */
QPointF Experience::RechercherEffortMax(QChar courbe)
{
    QList<PointDeCourbe> *laCourbe = &courbeO;
    if(courbe =='A')
        laCourbe = &courbeA;

    QList<PointDeCourbe>::iterator max = std::max_element(laCourbe->begin(), laCourbe->end());
    return *max;
}

/**
 * @brief Experience::RechercherEffortAzero
 * @param courbe définit sur qu'elle courbe la recherche est effectuée 'A' ou 'O'
 * @return la valeur de l'effort pour à l'origine de la courbe
 */
double Experience::RechercherEffortAzero(QChar courbe)
{
    QList<PointDeCourbe> *laCourbe = &courbeO;
    if(courbe =='A')
        laCourbe = &courbeA;
    return laCourbe->at(0).y();
}

/**
 * @brief Experience::RechercherEffortAquatreVingtDix
 * @param courbe définit sur qu'elle courbe la recherche est effectuée 'A' ou 'O'
 * @return la valeur de l'effort à 90°
 */
double Experience::RechercherEffortAquatreVingtDix(QChar courbe)
{
    QList<PointDeCourbe> *laCourbe = &courbeO;
    if(courbe =='A')
        laCourbe = &courbeA;
    return laCourbe->at(250).y();   // 90° * 1000 ptsCodeur / 360°
}

/**
 * @brief Experience::ObtenirVitesse
 * @return La vitesse de l'expérience courante
 */
qint16 Experience::ObtenirVitesse()
{
    return vitesse;
}
