//
// Created by mvenne on 06/01/2020.
//

#include "Fenetre.h"
#include <QtWidgets/QFormLayout>
#include <QString>
#include <QtWidgets/QPushButton>
#include "Courbes.h"
#include <QtWidgets/QApplication>

using namespace std;

Fenetre::Fenetre():QWidget() {

    bouton = new QPushButton(tr("Courbes"), this);
    bouton2 = new QPushButton(tr("Données en direct"), this);
    bouton3 = new QPushButton(tr("Compléments"), this);
    formLayout = new QFormLayout;
    formLayout->addRow(bouton);
    formLayout->addRow(bouton2);
    formLayout->addRow(bouton3);
    setLayout(formLayout);
    QObject::connect(bouton, SIGNAL(clicked()), this, SLOT(Courbes()));
    /*QObject::connect(bouton2, SIGNAL(clicked()), this, SLOT(Donnees()));
    QObject::connect(bouton3, SIGNAL(clicked()), this, SLOT(Complement()));*/
    this->adjustSize();


}


void Fenetre::Courbes() {




}

















Fenetre::~Fenetre() {


    delete(bouton);
    delete (bouton2);
    delete (bouton3);
}