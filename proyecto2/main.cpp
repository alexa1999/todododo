#include <iostream>

using namespace std;

void intercambio(int&a , int&b){
    int t=a;
    a=b;
    b=t;
}
void inv(int array[],int length){
    for (int i =0;i<length/2;i++){
        intercambio(array[i],array[length -(i+1)]);
    }
}
int main()
{
    int array[3]={1,2,3};
    cout<<inv(array[3],3);
}
