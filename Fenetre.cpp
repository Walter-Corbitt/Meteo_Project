//
// Created by mvenne on 06/01/2020.
//

#include "Fenetre.h"
#include <QtWidgets>
#include <QString>




using namespace std;

Fenetre::Fenetre(QMainWindow *window):QWidget() {
    menu = new Menu(window);
    QObject::connect(menu->button_courbes,SIGNAL(clicked()),this,SLOT(Courbes()));
}

void Fenetre::Courbes() {
    delete(menu);
}







