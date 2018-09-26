#include <iostream>
#include "enigma.h"
#include <stdlib.h>
using namespace std;

int main()
{

    //enigma receptor(clave);
    string clave;
    cout<<"\nDigite la clave de 3 digitos en MAYUSCULAS: "<<endl;
    do
    {
        cin>>clave;
        system("cls");
        if(clave.size()!=3)
        {
            cout<<"\nVuelve a ingresar la clave : "<<endl;
        }
        else{
            cout<<"Tu clave es : "<<clave<<"\n\n";
        }
        //system("cls");

    }while(clave.size()!=3);





    cout<<"Digite el mensaje:"<<endl;
    string mensaje;
    cin>>mensaje;

    enigma emisor(clave);

    cout<<"Cifrado:"<<endl;
    emisor.cifrar(mensaje);
   // string md=receptor.descifrar(mc);
   // cout<<"Descifrado:"<<md<<endl;
    return 0;

}
