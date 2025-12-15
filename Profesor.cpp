#include "Profesor.h"

Profesor::Profesor() {
    idProfesor = 0;
    nombre = "";
    especialidad = "";
}

Profesor::Profesor(int id, string nom, string esp) {
    idProfesor = id;
    nombre = nom;
    especialidad = esp;
}

void Profesor::registrarProfesor() {
    cout << "ID Profesor: ";
    cin >> idProfesor;
    cin.ignore();

    cout << "Nombre: ";
    getline(cin, nombre);

    cout << "Especialidad: ";
    getline(cin, especialidad);
}

void Profesor::mostrarProfesor() {
    cout << "ID: " << idProfesor << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Especialidad: " << especialidad << endl;
}

int Profesor::getIdProfesor() {
    return idProfesor;
}
