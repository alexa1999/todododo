#include <iostream>
#include <string>

using namespace std;


//clase ANIMAL
class ANIMAL{
 private:
  string nombre;
  int edad;
 public:
    ANIMAL(){}
  ANIMAL(string,int);
  virtual void comer();
};
//contructor ANIMAL
ANIMAL::ANIMAL(string _nombre,int _edad){
 nombre=_nombre;
 edad=_edad;
}
//metodo comer
void ANIMAL::comer(){
 cout<<"Nombre: "<<nombre<<endl;
 cout<<"Edad: "<<edad<<endl;
}
//clase HUMANO
class HUMANO:public ANIMAL{
 private:
  string pais;
  string dni;
 public:
  HUMANO(string,int,string,string);
  void comer();
};
//constructor HUMANO
HUMANO::HUMANO(string _nombre,int _edad,string _pais,string _dni):ANIMAL(_nombre,_edad), pais(_pais),dni(_dni){}

//metodo comer
void HUMANO::comer(){
 ANIMAL::comer();
 cout<<"Nacionalidad: "<<pais<<endl;
 cout<<"DNI: "<<dni<<endl;
}
//clase PERRO
class PERRO:public ANIMAL{
 private:
  string raza;
  string color;
 public:
  PERRO(string,int,string,string);
  void comer();
};
//costructor PERRO
PERRO::PERRO(string _nombre,int _edad,string _raza,string _color):ANIMAL(_nombre,_edad){
 raza=_raza;
 color=_color;
}
//metodo comer
void PERRO::comer(){
 ANIMAL::comer();
 cout<<"Raza: "<<raza<<endl;
 cout<<"Color: "<<color<<endl;
}
int main(){
 ANIMAL *vector[4];
 HUMANO h("JHANCARLO",23,"PERUANO","73475373");
 PERRO p("BOBY",2,"PITBULL","BLANCO");
 HUMANO h1("JUAN",10,"MEXICANO","87346521");
 PERRO p1("AQISHA",3,"PEQUENEZ","NEGRO");

 vector[0] = &h;
 vector[1] = &p;
 vector[2] = &h1;
 vector[3] = &p1;
 vector[0]->comer();
 cout<<endl;
 vector[1]->comer();
 cout<<endl;
 vector[2]->comer();
 cout<<endl;
 vector[3]->comer();

 return 0;
}

