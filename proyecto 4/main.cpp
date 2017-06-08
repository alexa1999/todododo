#include <iostream>

using namespace std;

int main()
{
    int tam, temp;
    cout <<"ingrese tamao:" <<endl;
    cin >> tam ;
    cout <<"   " <<endl;
    int arreglo[tam];
    for(int i=0; i<tam; i++){
        cin >> arreglo[i];

    }
    for(int i = 0, j = tam -1; i<j ; i++,j--) {
        temp = arreglo [i];
        arreglo[i]=arreglo[j];
        arreglo[j] = temp ;

    }
    for(int i=0;i<tam ; i++) {
        cout << arreglo[i];
    }
    return 0;


}
/*
{
    for(int i=0; i<=100 ;i++){
        if ((i%2!=0 || i==2) && (i%3!=0 || i==3) && (i%5!=0 || i==5) && (i%7!=0 || i==7))

            cout <<i<<endl;

    }
    return 0;
}*/




