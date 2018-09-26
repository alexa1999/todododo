#include <iostream>
#include "Cesar.h"
#include <stdlib.h>
#include "string"
using namespace std;

Cesar::Cesar()
{
    clave=generaClave();
    //alfabeto="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    //ctor
}
int Cesar::generaClave()
{
    int claveO;
    claveO=rand()%100;
    claveO=modulo(claveO,tamalf);
    if(claveO<0){claveO=tamalf+claveO;}
    return claveO;
}
string Cesar::M_Cifrado(string m )
{
    string mc;
    int pos,k;
    int tmalf=alfabeto.size();

    for(int i=0;i<m.size();i++)
    {
        pos=alfabeto.find(m[i]);
        k=pos+clave;
        k=modulo(k,tmalf);
        mc+=alfabeto[k];
    }
    return mc;
}
string Cesar::M_Desifrado(string d )
{
    string mc;
    int pos,k,n;
    //int tmalf=alfabeto.size();

    for(int i=0;i<d.size();i++)
    {
        pos=alfabeto.find(d[i]);
        //cout<<pos<<endl;
        k=pos-clave;
        //cout<<k<<endl;
        if(k<tamalf){k=tamalf+k;}
        else{k=k;}
        k=modulo(k,tamalf);
        /*if(k<tamalf){k=tamalf-k;}
        else{k=k;}*/
        mc+=alfabeto[k];
    }
   return mc;
}
int Cesar::modulo(int a,int n)
{
    int r=a-(a/n)*n;
    return r;
}
Cesar::~Cesar()
{
    //dtor
}
