#include <iostream>
#include <string>
#include "Affin.h"
#include <vector>
#include <stdlib.h>
using namespace std;

Affin::Affin()
{
    tam_alf=alfabeto.size();
    Generar();
    //ctor
}
int Affin::mcd(int a,int b)
{
    int r;
	while(r!=0)
	{
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}
void Affin::Generar()
{
    /*vector <int> tmp;
    for(int i=1;i<tam_alf;i++)
    {
        if(mcd(i,tam_alf)==1)
        {
            tmp.push_back(i);
        }
    }*/
    //a=413;
    //b=10840;
    a=rand()%100;
    b=rand()%100;
    while(mcd(a,tam_alf)!=1)
    {
        a=rand()%100;
    }
    //a=2920;
    //b=66;

}

string Affin::cifradoAffin(string msn)
{
    string resultado;
    //Generar();
    //a=56;
    //b=40;
    for(int j=0;j<msn.size();j++)
    {
        int y;
        int x;

        x=alfabeto.find(msn[j]);

        if(a<0){a=modulo((tam_alf-a*(mcd(tam_alf,a))),tam_alf);}
        //if(a>tam_alf){a=modulo((a*mcd(tam_alf,a))-tam_alf,tam_alf);}
        if(b<0){b=modulo((tam_alf-b*(mcd(tam_alf,b))),tam_alf);}
        //if(b>tam_alf){b=modulo((b*mcd(tam_alf,b))-tam_alf,tam_alf);}
        y=modulo((a*x+b),tam_alf);
        resultado+=alfabeto[y];

    }
    return resultado;
}

int Affin::modulo(int a,int n)
{
    int r=a-(a/n)*n;
    if(n<0)
        return r+=n;
    return r;
}

//-------------------------------------------------------------//

vector<int> Affin::euclides_Extendido(int a, int b)//s=inversa r1=mcd
{
    vector<int> EE;
    int r1=a;
    int r2=b;
    int s1=1;
    int s2=0;
    int t1=0;
    int t2=1;
    int cociente,r,s,t;
    while(r2>0)
    {
        cociente=r1/r2;
        r=r1-(cociente*r2);
        r1=r2;
        r2=r;
        s=s1-(cociente*s2);
        s1=s2;
        s2=s;
        t=t1-(cociente*t2);
        t1=t2;
        t2=t;
    }
    s=s1;
    t=t1;
    r=r1;
    EE.push_back(s);
    EE.push_back(t);
    EE.push_back(r);
    //s=modulo(s,b);
    return EE;
}
int Affin::Inversa(int a,int n)
{
    vector<int> I;
    int inversa;
    if(mcd(a,n)==1)
    {
       I=euclides_Extendido(a,n);
       inversa=I[0];
       if(inversa<0){
         inversa=modulo(inversa,n);
       }
    }
   //cout<<"INVERSA****: "<<inversa<<endl;
   return inversa;
}

string Affin::descifradoAffin(string msn)
{
    string resultado;
    int a_euExten=Inversa(a,tam_alf);
    int x,y,tmp;

    /*if(a_euExten<0)
    {
        a_euExten=modulo((tam_alf-a_euExten*(mcd(tam_alf,a_euExten))),tam_alf);
    }*/
    for(int j=0;j<msn.size();j++)
    {

        y=alfabeto.find(msn[j]);

        b=modulo(b,tam_alf);
        if(b<0){b=tam_alf+b;}else{b=b;}
        //if(b>tam_alf){b=modulo((b*mcd(tam_alf,b))-tam_alf,tam_alf);}

        tmp=(y-b);
        tmp=modulo(tmp,tam_alf);
        if(tmp<0)
        {
            tmp=tmp+tam_alf;
        }
        else{tmp=tmp;}

        //if(tmp<0){tmp=modulo((tam_alf-tmp*(mcd(tam_alf,tmp))),tam_alf);}

        x=modulo((a_euExten*tmp),tam_alf);
        resultado+=alfabeto[x];
    }
    return resultado;

}

Affin::~Affin()
{
    //dtor
}
