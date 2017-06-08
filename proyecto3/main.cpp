#include <iostream>

using namespace std;

/*int main()
{
    int a,b,z;
    cout << "ingrese primer numero:" << endl;
    cin>>a;
    cout << "ingrese el segundo numero: " << endl;
    cin>> b;

    if(a>b)
        z=a;
    else
        z=b;
    cout << z<< endl;
    z=(a>b)? a:b;
    return 0;
}*/
/*int main()
{
    int score[10];
    cin >>score[0] ;
    cin >> score[1];
    cin >> score[2];
    cin >> score[3];
    cin >> score[4];

    cout <<score[0] <<endl;
    cout <<score[1] <<endl;
    cout <<score[2] <<endl;
    cout <<score[3] <<endl;
    cout <<score[4] <<endl;
    return 0;
}*/
/*int main()
{
    int score[5];
    int c =0;
    cin >>score[c++] ;
    cin >> score[c++];
    cin >> score[c++];
    cin >> score[c++];
    cin >> score[c++];

    cout <<score[--c] <<endl;
    cout <<score[--c] <<endl;
    cout <<score[--c] <<endl;
    cout <<score[--c] <<endl;
    cout <<score[--c] <<endl;
    return 0;
}*/
int main()
{
    int score[3];
    cin >>score[0] ;
    cin >> score[1];
    cin >> score[2];
    int b ;
    b=score[0];
    score[0] = score[2];
    score[2]=b;

    cout <<score[0]<< endl;
    cout <<score [1] << endl;
    cout <<score[2]<< endl;
    return 0;


}
