#include <iostream>
#include "enigma.h"
using namespace std;
enigma::enigma(string c)
{
    clave=c;
    //ctor
}
void enigma::cifrar(string msj)
{
    string cif,K,f;
    for (int i=0;i<msj.length();i++)
    {
        int pos=alfabeto.find(msj[i]);
        K=rotor3[pos];
        pos=alfabeto.find(rotor3[pos]);
        K=rotor2[pos];
        pos=alfabeto.find(rotor2[pos]);
        K=rotor1[pos];
        pos=reflector.find(rotor1[pos]);
        f=reflector[pos+1];
        if(f==" ")
            pos=pos-1;
        else
            pos=pos+1;
        K=reflector[pos];
        pos=rotor1.find(reflector[pos]);
        K=alfabeto[pos];
        pos=rotor2.find(alfabeto[pos]);
        K=alfabeto[pos];
        pos=rotor3.find(alfabeto[pos]);
        K=alfabeto[pos];
        cif+=K;
        //cout<<"\n el mensaje cifrado es  =  "<<K<<"\n\n";


    }
    cout<<cif<<"\n\n\n";
    //return cif;

}
string enigma::descifrar(string cif)
{
    string des;
    for  (int i=0;i<cif.length();i++)
    {
        int pos=alfabeto.find(cif[i]);

    }
    return des;
}

enigma::~enigma()
{
    //dtor
}
