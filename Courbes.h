//
// Created by mvenne on 07/01/2020.
//

#ifndef MENU_COURBES_H
#define MENU_COURBES_H
#include <iostream>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QWidget>
#include <QtWidgets/QPushButton>


using namespace std;

class Courbes: public QWidget {

Q_OBJECT
public :

    Courbes();


    virtual ~Courbes();

    int courbe(int argc, char *argv[]);

private :

    QFormLayout *formLayout;
    QPushButton *bouton;
    QPushButton *bouton2;
    QPushButton *bouton3;







};


#endif //MENU_COURBES_H
