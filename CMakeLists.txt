set(CMAKE_AUTOMOC ON)
cmake_minimum_required(VERSION 3.14)
project(Meteo_Project)

set(CMAKE_CXX_STANDARD 14)
find_package(Qt5Widgets)

add_executable(Meteo_Project main.cpp Fenetre.cpp Fenetre.h Courbes.cpp Courbes.h)
target_link_libraries(Meteo_Project Qt5::Widgets)