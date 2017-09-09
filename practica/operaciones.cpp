
#include <iostream>
#include"mensaje.h"

using namespace std;
int suma(int operador1 , int operador2)
 {
     return operador1+operador2;
 }
double suma(double operador1,double operador2)
 {
     return operador1+operador2;
 }
int resta(int operador1 , int operador2)
 {
     return operador1 - operador2;
 }
double resta(double operador1 , double operador2)
{
    return operador1 - operador2;
}
int AND(int operador1 , int operador2)
{
    return operador1 & operador2;
}
int OR(int operador1 , int operador2)
{
    return operador1 | operador2;
}
int XOR(int operador1,int operador2)
{
    return operador1^operador2;
}
int NOT(int operador)
{
    return !operador;
}
int desIzq(int operador1, int operador2)
{
    return operador1 <<operador2;
}
int desDer(int operador1,int operador2)
{
    return operador1>>operador2;
}











