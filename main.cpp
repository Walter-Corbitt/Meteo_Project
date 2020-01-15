#include <iostream>
#include <QtWidgets>
#include "Fenetre.h"
#include "Courbes.h"


int main(int argc, char *argv[]) {
        QApplication app(argc,argv);
        QMainWindow window;
        Fenetre fenetre(&window);
        window.show();
        return app.exec();
}