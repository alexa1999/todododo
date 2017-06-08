#ifndef CONSERJE_H
#define CONSERJE_H
#include "Persona.h"
#include "Birthay.h"
class conserje:public Persona

{
private:
    string hobbie;

public:
    conserje(string n,Birthay c,int d,string p):Persona(n,c,d,p)
    {
    }
    void mostrar(){
        cout<<name<<" "<<cumple.edad()<<" "<<dni<<" "<<pais;
    }


};

#endif // CONSERJE_H
