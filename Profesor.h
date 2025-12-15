#ifndef PROFESOR_H
#define PROFESOR_H

#include <iostream>
using namespace std;

class Profesor {
private:
    int idProfesor;
    string nombre;
    string especialidad;

public:
    Profesor();
    Profesor(int id, string nom, string esp);

    void registrarProfesor();
    void mostrarProfesor();

    int getIdProfesor();
};

#endif
