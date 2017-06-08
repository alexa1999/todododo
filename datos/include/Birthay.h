
#ifndef BIRTHAY_H
#define BIRTHAY_H
#include <iostream>

using namespace std;

class Birthay
{
    public:
        int dia,mes,anio;

    Birthay(){
        dia=0;
        mes=0;
        anio=0;
    }

    Birthay(int d,int m,int a){
        dia=d;
        mes=m;
        anio=a;
    }

    int edad(){
        int x=2017-anio;
        return x;
    }
};

#endif // BIRTHAY_H
