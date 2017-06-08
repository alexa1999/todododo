
#define PERSONA_H

#include "Birthay.h"
#include "conserje.h"
using namespace std;
class Persona{
protected:
    string name;
    Birthay cumple;
    int dni;
    string pais;

public:
    Persona();
    Persona(string n, Birthay c,int d ,string p)
    {
        name=n;
        cumple=c;
        dni=d;
        pais=p;
    }

    virtual void mostrar(){};
    //Birthay();


};
