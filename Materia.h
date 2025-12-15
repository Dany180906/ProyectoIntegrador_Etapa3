#ifndef MATERIA_H
#define MATERIA_H

#include <string>
using namespace std;

class Materia {
private:
    int idMateria;
    string nombre;

public:
    // Constructores y destructor
    Materia();
    Materia(int id, string nombre);
    ~Materia();

    // Getters y setters
    int getId();
    void setId(int id);

    string getNombre();
    void setNombre(string nombre);

    // Métodos
    void registrarMateria();
    void mostrarMateria();
};

#endif
