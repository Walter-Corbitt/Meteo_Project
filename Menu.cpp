//
// Created by ebillard on 14/01/2020.
//

#include "Menu.h"

Menu::Menu( QMainWindow *window)  {
    button_courbes = new  QPushButton("Courbes",window);

}

Menu::~Menu() {
      delete(button_courbes);
}


