#include <iostream>
#include "Point.h"
#include "Vector.h"
using namespace std;
void swap(Point &x ,Point &y)
{
    Point tem=x;
    x=y;
    y=tem;
}
void swapp(Point *x ,Point *y)
{
    Point tem=*x;
    *x=*y;
    *y=tem;
}
//constructor
//metodo que se invoca cuando creo una instancia
int main()
{
    Point p(3,4);
    Point q(6,7);
//    p.print();
//    swap(p,q);
//    p.print();
//    q.print();
//
//    swapp(&p,&q);
//    q.print();

    Point *easy=new Point;
    //easy -> x=100;
    easy->offset(10,10);
    easy-> print();
    delete easy;
//    Point *ptr =&p;
//    (*ptr).print();
//    //son lo mismo
//    ptr->print();
    cout << "Hello world!" << endl;
    Vector v;
    //v.print;
    return 0;
}
