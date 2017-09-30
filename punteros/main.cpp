#include <iostream>

using namespace std;

void funcion(int *x)
{
    *x=*x-10;
}
int funcion2(int &x)
{
    //es como decir int&x=y;
    x*=2;
}
int main()
{
    /*int y;}

    int *ptr=&y;
    *ptr=10;
    //contenido de *ptr=10
    //& para la direccion y para referenciar
    cout<<*ptr<<endl;

    int &x=y;
    y=20;
    cout<<*ptr<<endl;*/

    //ejercicio 3
//    int x=20;
//    funcion(&x);
//    cout<<x;

    //ejercicio 4
//    int x=20;
//    funcion2(x);
//    cout<<x;
    //ejercicio 7
//    int a[5];
//    int *ptr=a;
//    cout<<"ingrese 5 numeros"<<endl;
//    cin>>*ptr>>*(ptr+1)>>*(ptr+2)>>*(ptr+3)>>*(ptr+4)>>*(ptr+5);
//    cout<<endl;
    /*for(int i=0;i<5;i++)
        cout<<a[i]<<endl;
        cout<<endl;
    for(int i=4;i>=0;i--){
        cout<<*(ptr + i)<<endl;
    }*/
    //ejercicio 9
//    cout<<"la diferencia es:"<<endl;
//    int* pult =ptr+5;
//    cout<<pult-ptr;

//    int x=10;
//    int y=15;
//    const int *pint=&x;
//    *pint =20;
//    cout<<*pint;
    char* texto="Char*";
    for(int i=4;i>=0;i--)
        cout<<texto[i];


  return 0;
}
