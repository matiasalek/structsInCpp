#include <iostream>

using namespace std;

// declarar la struct Persona que tiene nombre apellido, edad y dni
struct Persona {
string nombre;
string apellido;
int edad;
int dni;
};

// el constructor para crear una struct Persona
Persona crearPersona (string nombreDado, string apellidoDado, int edadDado, int dniDado) {
Persona p;
p.nombre = nombreDado;
p.apellido = apellidoDado;
p.edad = edadDado;
p.dni = dniDado;
return p;
}

// funcion sencilla para mostrar una persona en consola
void mostrarPersona (Persona personaDada){
    Persona p = personaDada;
    cout << "Los datos de la persona son: " << endl;
    cout << "Nombre: " << p.nombre << endl;
    cout << "Apellido: " << p.apellido << endl;
    cout << "Su edad es: " << p.edad << endl;
    cout << "Su dni es: " << p.dni << endl;
}

int main()
{
    //creo una persona con argumentos pasados por valores.
    Persona personaCreada = crearPersona("Matias","Aleksandrowicz",22,123456789);

    //uso la funcion anteriormente creada para mostrar la persona recien creada en pantalla.
    mostrarPersona(personaCreada);

    return 0;
}
