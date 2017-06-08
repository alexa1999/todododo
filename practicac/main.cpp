#include <iostream>
#include <math.h>
#include <stdio.h>


using namespace std;

int Longitud(char cadena[])
{
    int l=0;
    while(cadena[l++]!='\0');
    return l-1;
}

int Buscar(char cadena[],char v)
{
    int b=0;
    while(cadena[b]!='\0')
        if(cadena[b++]==v)
            return b-1;
    return -1;
}

float convertir(char c)
{
    float val=-1.0;
    switch (c)
    {
     case '0': val=0; break;
     case '1': val=1; break;
     case '2': val=2; break;
     case '3': val=3; break;
     case '4': val=4; break;
     case '5': val=5; break;
     case '6': val=6; break;
     case '7': val=7; break;
     case '8': val=8; break;
     case '9': val=9; break;
    }
    return val;
}

float convertirCadena(char cadena[])
{
    float val=0;
    int tam=Longitud(cadena);
    int posPunto=Buscar(cadena,'.');
    if(posPunto==-1)
    {
        for(int i=0;i<tam;i++)
            val+=convertir(cadena[i])*pow(10,tam-i-1);
    }
    else
    {
        int tamDecimal=tam-posPunto;
        int tamEntera=tam-tamDecimal;
        int i;
        for(i =0;i<tamEntera;i++) // parte entera
            val+=convertir(cadena[i])*pow(10,tamEntera-i-1);

        i++;
        int j=1;
        for(;i<tam;i++,j++) // parte decimal
            val+=convertir(cadena[i])/pow(10,j);
    }

    return val;
}

