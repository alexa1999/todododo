#ifndef GERENTE_H
#define GERENTE_H
#include "Persona.h"
#include "Birthay.h"

class Gerente:public Persona{
public:
    Gerente(string n,Birthay b,int d,string p):Persona(n,b,d,p)
    {
    }
    void mostrar(){
        cout<<name<<" "<<cumple.edad()<<" "<<dni<<" "<<pais;
    }

};

#endif // GERENTE_H
