#ifndef OPERACIONES_H_INCLUDED
#define OPERACIONES_H_INCLUDED
int suma(int operador1 , int operador2);
double suma(double operador1,double operador2);
int resta(int operador1 , int operador2);
double resta(double operador1 , double operador2);
int AND(int operador1 , int operador2);
int OR(int operador1 , int operador2);
int XOR(int operador1,int operador2);
int desIzq(int operador1, int operdor2);
int desDer(int operador1,int operador2);
template<typename T,typename T2>
T exponente(T x, T2 y)
{
    if(y==1){
        return x;
    }
    else
        return x*exponente(x,y-1);
}

#endif // OPERACIONES_H_INCLUDED
