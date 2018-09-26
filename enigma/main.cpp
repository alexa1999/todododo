#include <iostream>
#include "enigma.h"
using namespace std;

int main()
{

    //enigma receptor(clave);

    cout<<"Digite la clave:"<<endl;
    string clave;
    cin>>clave;
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
