#include <iostream>
#include<Arreglo.h>
using namespace std;

int main()
{
    int arr[]={1,5,3};
    Arreglo a(3,arr);
//    lista.rellenar();

//    a.insertar(1,5);
//    a.insertar(0,10);
//    a.insertar(4,20);
    cout<<endl;
    a.eliminar(1);
    a.eliminar(0);
    a.imprimir();
    cout<<endl;


//    cout<<endl;
//    lista.vaciar();
    return 0;
}
