#include "Arreglo.h"
#include <iostream>
using namespace std;
Arreglo::Arreglo(int tam,int arr[])
{
    this->tam=tam;
    this->data=new int[tam];
    for(int i=0;i<=tam;i++)
    {
        data[i]=arr[i];
    }
}

//void Arreglo::rellenar(){
//        for(int i=0;i<tam;i++){
//            cin>>data[i];
//        }
//}
int Arreglo::imprimir(){
    for(int i=0;i<tam;i++){
        cout<<data[i]<<" ";
    }
}
void Arreglo:: insertarAtras(int elem){
    int *nuevo= new int [tam+1];
    tam++;
    for(int i=0;i<tam-1;i++){
        nuevo[i]=data[i];
    }
    nuevo[tam-1]=elem;
    delete [] data;
    data=nuevo;
    //this->insertar(size,elem);
}
void Arreglo ::insertar(int pos,int elem)
{
    int *nuevo= new int [tam+1];
    tam++;
    for(int i=0;i<pos;i++){
        nuevo[i]=data[i];
    }

    nuevo[pos]=elem;
    for(int i=pos;i<tam;i++)
    {
        nuevo[i+1]=data[i];
    }
    delete[]data;
    data=nuevo;
}
void Arreglo:: eliminar(int pos)
{
    int *nuevo= new int [tam-1];
    tam--;
    for(int i=0;i<pos;i++){
        nuevo[i]=data[i];
    }
    for(int i=pos;i<tam;i++)
    {
        nuevo[i]=data[i+1];
    }
    delete[]data;
    data=nuevo;

}


