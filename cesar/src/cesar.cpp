#include "cesar.h"
#include <string>
using namespace std;
cesar::cesar(int clv)
{
    alfabeto="abcdefghijklmnopqrstuvwxyz";
    clave=clv;
}

string cesar::cifrar(string mensaje)
{
    for (int i=0;i<mensaje.length();i++)
    {
        int pos=alfabeto.find(mensaje[i]);
        if ((pos+clave)>alfabeto.length())
            mensaje[i]=alfabeto[(pos+clave)-alfabeto.length()];
        else
            mensaje[i]=alfabeto[pos+clave];
    }
    return mensaje;
}
string cesar::descifrar(string mensaje)
{
    for  (int i=0;i<mensaje.length();i++)
    {
        int pos=alfabeto.find(mensaje[i]);
        if ((pos-clave)<0){
            cout<<pos;
            cout<<pos-clave;
            cout<<(pos-clave)*-1;
            cout<<alfabeto.length()-((pos-clave)*(-1));
            cout<<alfabeto.length();
            mensaje[i]=alfabeto[alfabeto.length()-((pos-clave)*(-1))];}
        else
            mensaje[i]=alfabeto[pos-clave];
    }
    return mensaje;
}
