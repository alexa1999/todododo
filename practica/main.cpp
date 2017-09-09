#include <iostream>
#include "operaciones.h"
using namespace std;

int main()
{
    //mensaje("hola mundo");
    //cout << "Hello world!" << endl;
    cout<<"Suma de enteros:" << suma(5,6)<<endl;
    cout<<"Suma de doubles:" << suma(5.5,6.4)<<endl;
    cout<<"resta de enteros:" << resta(7,6)<<endl;
    cout<<"resta de enteros:" << resta(7.5,6.3)<<endl;
    cout<<"AND de enteros:" << AND(2,1)<<endl;
    cout<<"exponentes de enteros: "<<exponente(3,2)<<endl;


    return 0;
}

