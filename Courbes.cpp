//
// Created by mvenne on 07/01/2020.
//

#include "Courbes.h"
#include <QtWidgets/QFormLayout>
#include <QString>
#include <QtWidgets/QPushButton>
#include <iostream>
#include <QtWidgets/QApplication>

using namespace std;

Courbes::Courbes(): QWidget() {

    bouton = new QPushButton(tr("C8"), this);
    bouton2 = new QPushButton(tr("Données e"), this);
    bouton3 = new QPushButton(tr("Complés"), this);
    formLayout = new QFormLayout;
    formLayout->addRow(bouton);
    formLayout->addRow(bouton2);
    formLayout->addRow(bouton3);
    setLayout(formLayout);

}


int Courbes::courbe(int argc, char **argv) {

    QApplication app(argc, argv);
    Courbes c;
    c.show();

    return app.exec();

}


Courbes::~Courbes() {


    delete(bouton);
    delete (bouton2);
    delete (bouton3);
}