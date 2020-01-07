//
// Created by mvenne on 06/01/2020.
//

#ifndef MENU_FENETRE_H
#define MENU_FENETRE_H

#include <iostream>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QWidget>
#include <QtWidgets/QPushButton>
#include "Courbes.h"

using namespace std;

class Fenetre: public QWidget {

    Q_OBJECT
public :

    Fenetre();


    virtual ~Fenetre();

public slots:

            void Courbes();
    /*void Donnees();
    void Complement();*/





private :

    QFormLayout *formLayout;
    QPushButton *bouton;
    QPushButton *bouton2;
    QPushButton *bouton3;

};


#endif //MENU_FENETRE_H
