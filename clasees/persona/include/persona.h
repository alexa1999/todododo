#ifndef PERSONA_H
#define PERSONA_H
#include <string>

using namespace std;

class Persona
{
    public:
        string nombre;
        int edad;
    Persona(string n,int e);
    void cambiarNombre(string n);
    void cambiarEdad(int e);
    string consultarNombre();
    int consultarEdad();
    bool esMayordeEdad();


};

#endif // PERSONA_H
