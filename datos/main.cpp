#include <iostream>
#include "Birthay.h"

using namespace std;

class Persona{
public:
    string name;
    Birthay cumple;
    int dni;
    string pais;

public:
    Persona();
    Persona(string n, Birthay c,int d ,string p): name(n),cumple(c),dni(d),pais (p)
    {
    }
    ~Persona()
    {
    }
    virtual void mostrar(){};
    //Birthay();


};

class Gerente:public Persona{

    int oficina=0;
public:
    Gerente(string n,Birthay b,int d,string p):Persona(n,b,d,p)
    {
    }
    void mostrar(){
        cout<<name<<" "<<cumple.edad()<<" "<<dni<<" "<<pais;
    }

};

class Conserje:public Persona{
    int sotano=1;
public:
    Conserje(string n,Birthay b,int d,string p):Persona(n,b,d,p)
    {
    }
    void mostrar(){
        cout<<name<<" "<<cumple.edad()<<" "<<dni<<" "<<pais;
    }
};




int main()
{
    Persona *vectorpersonas[2];

    vectorpersonas[0]= new Gerente("carlos",Birthay(2,5,1999),54787,"Peru");
    vectorpersonas[1]= new Conserje("luis",Birthay(2,5,1982),778787,"ARGENTINA");

    vectorpersonas[0]->mostrar();
    cout<<endl;
    vectorpersonas[1]->mostrar();


    return 0;
}
