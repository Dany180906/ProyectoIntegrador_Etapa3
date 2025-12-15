#include <iostream>
#include "Sistema.h"
#include "Alumno.h"
#include "Profesor.h"
#include "Materia.h"
#include "Evaluacion.h"

using namespace std;

int main() {

    Sistema sistema;
    int opcion = 0;

    while (opcion != 5) {
        cout << "\n===== MENU PRINCIPAL =====\n";
        cout << "1. Registrar Alumno\n";
        cout << "2. Registrar Profesor\n";
        cout << "3. Registrar Materia\n";
        cout << "4. Registrar Evaluacion\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            int id;
            string nombre, matricula, grupo;

            cout << "\nID del alumno: ";
            cin >> id;
            cout << "Nombre: ";
            cin.ignore();
            getline(cin, nombre);
            cout << "Matrícula: ";
            getline(cin, matricula);
            cout << "Grupo: ";
            getline(cin, grupo);

            Alumno a(id, nombre, matricula, grupo);
            sistema.registrarAlumno(a);

            cout << "Alumno registrado.\n";
        }

        else if (opcion == 2) {
            int id;
            string nombre, especialidad;

            cout << "\nID del profesor: ";
            cin >> id;
            cout << "Nombre: ";
            cin.ignore();
            getline(cin, nombre);
            cout << "Especialidad: ";
            getline(cin, especialidad);

            Profesor p(id, nombre, especialidad);
            sistema.registrarProfesor(p);

            cout << "Profesor registrado.\n";
        }

        else if (opcion == 3) {
            int id;
            string nombre;

            cout << "\nID de la materia: ";
            cin >> id;
            cout << "Nombre: ";
            cin.ignore();
            getline(cin, nombre);

            Materia m(id, nombre);
            sistema.registrarMateria(m);

            cout << "Materia registrada.\n";
        }

        else if (opcion == 4) {
            int idEval, idAlumno, idProfesor, idMateria;
            float calif;
            int cantCalif;

            cout << "\nID de la evaluacion: ";
            cin >> idEval;

            cout << "ID del alumno: ";
            cin >> idAlumno;

            cout << "ID del profesor: ";
            cin >> idProfesor;

            cout << "ID de la materia: ";
            cin >> idMateria;

            Alumno alumno = sistema.buscarAlumnoPorID(idAlumno);
            Profesor profesor = sistema.buscarProfesorPorID(idProfesor);
            Materia materia = sistema.buscarMateriaPorID(idMateria);

            Evaluacion e(idEval, alumno, profesor, materia);

            cout << "¿Cuántas calificaciones desea ingresar?: ";
            cin >> cantCalif;

            for (int i = 0; i < cantCalif; i++) {
                cout << "Calificacion " << i+1 << ": ";
                cin >> calif;
                e.registrarCalificacion(calif);
            }

            sistema.registrarEv
