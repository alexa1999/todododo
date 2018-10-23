#ifndef VECTOR_H
#define VECTOR_H
#include "Point.h"
#include <iostream>
using namespace std;

class Vector
{
    public:
        Vector();
        Vector(Vector &o);
        Vector(int,int);
        Vector(Point s,Point e);
        void offset(int,int);
        void print();



    private:
        Point start,end;
};

#endif // VECTOR_H
