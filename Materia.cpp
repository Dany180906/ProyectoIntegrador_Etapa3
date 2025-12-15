#include "Materia.h"
#include <iostream>

using namespace std;

// Constructor por defecto
Materia::Materia() {
    idMateria = 0;
    nombre = "";
}

// Constructor con parámetros
Materia::Materia(int id, string nombre) {
    this->idMateria = id;
    this->nombre = nombre;
}

// Destructor
Materia::~Materia() {
    // No se requiere liberar memoria dinámica
}

// Getters y setters
int Materia::getId() {
    return idMateria;
}

void Materia::setId(int id) {
    this->idMateria = id;
}

string Materia::getNombre() {
    return nombre;
}

void Materia::setNombre(string nombre) {
    this->nombre = nombre;
}

// Métodos
void Materia::registrarMateria() {
    cout << "Ingrese ID de la materia: ";
    cin >> idMateria;
    cin.ignore();

    cout << "Ingrese nombre de la materia: ";
    getline(cin, nombre);
}

void Materia::mostrarMateria() {
    cout << "ID Materia: " << idMateria << endl;
    cout << "Nombre: " << nombre << endl;
}
