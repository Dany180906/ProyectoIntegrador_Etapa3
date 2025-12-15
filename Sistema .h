#ifndef SISTEMA_H
#define SISTEMA_H

#include <vector>
#include <string> // Necesario si Alumno, Profesor, etc. usan std::string o si se usa para id


#include "Alumno.h"
#include "Profesor.h"
#include "Materia.h"
#include "Evaluacion.h"

/**
 *  Sistema
 *  Gestiona colecciones de Alumnos, Profesores, Materias y Evaluaciones.
 *
 * Esta clase central implementa las funcionalidades de registro, consulta (búsqueda),
 * y eliminación de las entidades principales del sistema.
 */
class Sistema {
private:
    // Atributos de la clase
    std::vector<Alumno> alumnos;
    std::vector<Profesor> profesores;
    std::vector<Materia> materias;
    std::vector<Evaluacion> evaluaciones;

public:
    // Constructores y Destructor
    Sistema();
    ~Sistema();

    // --- Métodos Getters para colecciones ---

    /**
     *  Obtiene el vector de todos los alumnos.
     *  std::vector<Alumno> El vector que contiene a todos los alumnos.
     */
    std::vector<Alumno> getAlumnos() const;

    /**
     *  Obtiene el vector de todos los profesores.
     *  std::vector<Profesor> El vector que contiene a todos los profesores.
     */
    std::vector<Profesor> getProfesores() const;

    /**
     *  Obtiene el vector de todas las materias.
     *  std::vector<Materia> El vector que contiene a todas las materias.
     */
    std::vector<Materia> getMaterias() const;

    /**
     *  Obtiene el vector de todas las evaluaciones.
     *  std::vector<Evaluacion> El vector que contiene a todas las evaluaciones.
     */
    std::vector<Evaluacion> getEvaluaciones() const;

    // --- Métodos para Registrar (Agregar) ---

    /**
     *  Registra un nuevo alumno en el sistema.
     *  alumno El objeto Alumno a registrar.
     */
    void registrarAlumno(const Alumno& alumno);

    /**
     *  Registra un nuevo profesor en el sistema.
     *  profesor El objeto Profesor a registrar.
     */
    void registrarProfesor(const Profesor& profesor);

    /**
     *  Registra una nueva materia en el sistema.
     *  materia El objeto Materia a registrar.
     */
    void registrarMateria(const Materia& materia);

    /**
     *  Registra una nueva evaluación en el sistema.
     *  evaluacion El objeto Evaluacion a registrar.
     */
    void registrarEvaluacion(const Evaluacion& evaluacion);

    // --- Métodos para Buscar por ID ---

    /**
     *  Busca un alumno por su ID.
     *  id El ID del alumno a buscar (asumimos que 'id' es de tipo int).
     *  Alumno El objeto Alumno encontrado o un objeto por defecto/excepción.
     */
    Alumno buscarAlumnoPorId(int id) const;

    /**
     *  Busca un profesor por su ID.
     *  id El ID del profesor a buscar.
     *  Profesor El objeto Profesor encontrado o un objeto por defecto/excepción.
     */
    Profesor buscarProfesorPorId(int id) const;

    /**
     *  Busca una materia por su ID.
     *  id El ID de la materia a buscar.
     *  Materia El objeto Materia encontrado o un objeto por defecto/excepción.
     */
    Materia buscarMateriaPorId(int id) const;

    /**
     *  Busca una evaluación por su ID.
     *  id El ID de la evaluación a buscar.
     *  Evaluacion El objeto Evaluacion encontrado o un objeto por defecto/excepción.
     */
    Evaluacion buscarEvaluacionPorId(int id) const;

    // --- Métodos para Eliminar por ID ---

    /**
     *  Elimina un alumno del sistema por su ID.
     *  id El ID del alumno a eliminar.
     *  bool 'true' si el alumno fue encontrado y eliminado, 'false' en caso contrario.
     */
    bool eliminarAlumno(int id);

    /**
     *  Elimina un profesor del sistema por su ID.
     *  id El ID del profesor a eliminar.
     *  bool 'true' si el profesor fue encontrado y eliminado, 'false' en caso contrario.
     */
    bool eliminarProfesor(int id);

    /**
     *  Elimina una materia del sistema por su ID.
     *  id El ID de la materia a eliminar.
     *  bool 'true' si la materia fue encontrada y eliminada, 'false' en caso contrario.
     */
    bool eliminarMateria(int id);

    /**
     *  Elimina una evaluación del sistema por su ID.
     *  id El ID de la evaluación a eliminar.
     *  bool 'true' si la evaluación fue encontrada y eliminada, 'false' en caso contrario.
     */
    bool eliminarEvaluacion(int id);
};

#endif // SISTEMA_H
