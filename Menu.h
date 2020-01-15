//
// Created by ebillard on 14/01/2020.
//

#ifndef METEO_PROJECT_MENU_H
#define METEO_PROJECT_MENU_H
#include <QtWidgets>
#include <QString>



class Menu : public QWidget{
    Q_OBJECT
public :
     Menu( QMainWindow *window);
    QPushButton* button_courbes;


    virtual ~Menu();



};


#endif //METEO_PROJECT_MENU_H
