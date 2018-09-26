#include <iostream>
#include "string"
#include "protocolo.h"
using namespace std;

protocolo::protocolo()
{
    //ctor
}
void protocolo::Crear_Keys()
{

    int c,a,b;
    ofstream imp_Key;
    imp_Key.open("Keys.txt");
    c=C.clave;
    a=A.a;
    b=A.b;
    imp_Key<<"clave Cesar: "<<c<<endl;
    imp_Key<<"clave Affin(a): "<<a<<endl;
    imp_Key<<"clave Affin(b): "<<b<<endl;

}
//void protocolo::Cifrado(string msj)
string protocolo::Cifrado(string msj)
{
    string sms,msEnig,clvE,clvnum,inicrot,finrot,steck,result,c;
    string cifradoenCesar,cifradoenAffin,cifradoenEnigma;
    string cifradoGeneral;
    int tammsj=msj.size();
    sms=msj.substr(3,tammsj-3);
    clvnum=msj.substr(0,3);//debe ser del 0 al 11
    //cout<<clvE<<endl;
    //cout<<sms<<endl;
    cifradoenCesar=C.M_Cifrado(sms);
    //cout<<"c: "<<cifradoenCesar<<endl;
    inicrot=cifradoenCesar.substr(0,8);
    /*finrot=cifradoenCesar.substr(3,3);
    steck=cifradoenCesar.substr(6,2);*/
    clvE=clvnum+inicrot;//+finrot+steck;
    E.claveEnig(clvE);
    msEnig=cifradoenCesar.substr(8,cifradoenCesar.size()-8);

    cifradoenEnigma=E.cifrar(msEnig);
    //cout<<"e: "<<cifradoenEnigma<<endl;

    cifradoenAffin=A.cifradoAffin(cifradoenEnigma);
    //cout<<"a: "<<cifradoenAffin<<endl;
    cifradoGeneral=clvE+cifradoenAffin;
    //cout<<cifradoGeneral<<endl;
    //cout<<E.cifrar(msEnig)<<endl;

    return cifradoGeneral;

}
void protocolo::Desifrado(string cif)
{
    string desAffin,desEnigma,desCesar,pasaCesar,desGneral;
    string paraAfin,paraEnigma,paraCesar,clvE,clvnum,clav;
    clvnum=cif.substr(0,3);
    clav=cif.substr(3,8);
    clvE=cif.substr(0,11);
    paraAfin=cif.substr(11,cif.size());
    paraEnigma=A.descifradoAffin(paraAfin);
    //cout<<"a: "<<paraEnigma<<endl;
    E.claveEnig(clvE);
    paraCesar=E.descifrar(paraEnigma);
    //cout<<"e: "<<paraCesar<<endl;
    //cout<<paraCesar<<endl;
    desCesar=clav+paraCesar;
    pasaCesar=C.M_Desifrado(desCesar);
    //cout<<"c: "<<pasaCesar<<endl;
    desGneral=clvnum+pasaCesar;
    //C.M_Desifrado()
    cout<<desGneral<<endl;

}
protocolo::~protocolo()
{
    //dtor
}
