#include "Sistema .h"
#include <algorithm> // Para std::remove_if o std::find_if
#include <iostream>  // Para mensajes de error simples si no se encuentra algo

// Constructor por defecto
Sistema::Sistema() {
    // Inicialización por defecto de los vectores (ya se hace automáticamente)
    // Se podrían cargar datos iniciales aquí si fuera necesario
}

// Destructor
Sistema::~Sistema() {
    // Los vectores se liberan automáticamente, no se necesita código explícito
}

// --- Implementación de Métodos Getters ---

std::vector<Alumno> Sistema::getAlumnos() const {
    return alumnos;
}

std::vector<Profesor> Sistema::getProfesores() const {
    return profesores;
}

std::vector<Materia> Sistema::getMaterias() const {
    return materias;
}

std::vector<Evaluacion> Sistema::getEvaluaciones() const {
    return evaluaciones;
}

// --- Implementación de Métodos para Registrar (Agregar) ---

void Sistema::registrarAlumno(const Alumno& alumno) {
    alumnos.push_back(alumno);
}

void Sistema::registrarProfesor(const Profesor& profesor) {
    profesores.push_back(profesor);
}

void Sistema::registrarMateria(const Materia& materia) {
    materias.push_back(materia);
}

void Sistema::registrarEvaluacion(const Evaluacion& evaluacion) {
    evaluaciones.push_back(evaluacion);
}

// --- Implementación de Métodos para Buscar por ID ---
// NOTA: Asumimos que cada clase (Alumno, Profesor, etc.) tiene un método .getId()

Alumno Sistema::buscarAlumnoPorId(int id) const {
    for (const auto& alumno : alumnos) {
        if (alumno.getId() == id) {
            return alumno;
        }
    }
    // Si no se encuentra, se devuelve un objeto Alumno por defecto.
    // En un sistema robusto, se lanzaría una excepción o se devolvería un std::optional.
    std::cerr << "Error: Alumno con ID " << id << " no encontrado.\n";
    return Alumno(); // Asumiendo que Alumno tiene un constructor por defecto
}

Profesor Sistema::buscarProfesorPorId(int id) const {
    for (const auto& profesor : profesores) {
        if (profesor.getId() == id) {
            return profesor;
        }
    }
    std::cerr << "Error: Profesor con ID " << id << " no encontrado.\n";
    return Profesor();
}

Materia Sistema::buscarMateriaPorId(int id) const {
    for (const auto& materia : materias) {
        if (materia.getId() == id) {
            return materia;
        }
    }
    std::cerr << "Error: Materia con ID " << id << " no encontrada.\n";
    return Materia();
}

Evaluacion Sistema::buscarEvaluacionPorId(int id) const {
    for (const auto& evaluacion : evaluaciones) {
        if (evaluacion.getId() == id) {
            return evaluacion;
        }
    }
    std::cerr << "Error: Evaluacion con ID " << id << " no encontrada.\n";
    return Evaluacion();
}

// --- Implementación de Métodos para Eliminar por ID ---

bool Sistema::eliminarAlumno(int id) {
    // Uso de std::remove_if (requiere C++11 o posterior) y erase idiom
    auto it = std::remove_if(alumnos.begin(), alumnos.end(),
        [id](const Alumno& a){ return a.getId() == id; });

    if (it != alumnos.end()) {
        alumnos.erase(it, alumnos.end());
        return true;
    }
    return false;
}

bool Sistema::eliminarProfesor(int id) {
    auto it = std::remove_if(profesores.begin(), profesores.end(),
        [id](const Profesor& p){ return p.getId() == id; });

    if (it != profesores.end()) {
        profesores.erase(it, profesores.end());
        return true;
    }
    return false;
}

bool Sistema::eliminarMateria(int id) {
    auto it = std::remove_if(materias.begin(), materias.end(),
        [id](const Materia& m){ return m.getId() == id; });

    if (it != materias.end()) {
        materias.erase(it, materias.end());
        return true;
    }
    return false;
}

bool Sistema::eliminarEvaluacion(int id) {
    auto it = std::remove_if(evaluaciones.begin(), evaluaciones.end(),
        [id](const Evaluacion& e){ return e.getId() == id; });

    if (it != evaluaciones.end()) {
        evaluaciones.erase(it, evaluaciones.end());
        return true;
    }
    return false;
}
