#include <iostream>
#include <QtWidgets/QApplication>
#include "Fenetre.h"
#include "Courbes.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Fenetre f;
    f.show();


    return app.exec();

}