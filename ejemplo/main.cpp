#include <iostream>
#include <Container.h>
using namespace std;

int main()
{
//    Point <float> fpoint (2.5,3.5);
//
//    cout << fpoint.getX() <<","<<fpoint.getY()<< endl;
    Container <int> icont(5);
    Container<char> ccont('r');
    cout<<icont.inc()<<endl;
    cout<<ccont.uppercase()<<endl;
    //cout << sum<float>(1.21,2.43) << endl;
    return 0;
}
