#include "Persona.h"
#include <iostream>
#include <string>
using namespace std;
Persona::Persona(string n,int e)
{
    nombre=n;
    edad=edad;
}
void Persona::cambiarNombre(string n)
{
    nombre=n;
}
void Persona::cambiarEdad(int e)
{
    int c;
    cout<<"ingrese el nombre: "<<endl;
    cin>>c;
    e=c;
}
string Persona::consultarNombre(){return nombre;}
int Persona:: consultarEdad(){return edad;}
bool Persona ::esMayordeEdad()
{
    if(edad>=18){return true;}
        else{return false;}
}
