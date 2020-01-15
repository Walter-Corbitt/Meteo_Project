//
// Created by mvenne on 06/01/2020.
//

#ifndef MENU_FENETRE_H
#define MENU_FENETRE_H

#include <iostream>
#include <QtWidgets>
#include "Courbes.h"
#include "Menu.h"

using namespace std;


class Fenetre: public QWidget {
Q_OBJECT
private:
    Menu* menu;
public:
    Fenetre(QMainWindow *window);
public slots:
   void Courbes();
};


#endif //MENU_FENETRE_H
