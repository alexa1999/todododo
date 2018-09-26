#include <iostream>
#include <cesar.h>
using namespace std;

int main()
{
    cout<<"Digite la clave:"<<endl;
    int clave;
    cin>>clave;
    cout<<"Digite el mensaje:"<<endl;
    string mensaje;
    cin>>mensaje;
    cesar emisor(clave);
    cesar receptor(clave);
    string mc=emisor.cifrar(mensaje);
    cout<<"Cifrado:"<<mc<<endl;
    string md=receptor.descifrar(mc);
    cout<<"Descifrado:"<<md<<endl;
    return 0;
}
