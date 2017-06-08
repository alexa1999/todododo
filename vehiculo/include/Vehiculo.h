#ifndef VEHICULO_H
#define VEHICULO_H


#include <iostream>
#include <string>
using namespace std;
class Vehiculo
{
protected:

    string license;
    int year;

public:
    Vehiculo(const string &myLicense , const int myYear ){
        license = myLicense;
        year = myYear;
    }
    const string getDesc () const {
         return license + " from " + "stringify ( year )";
    }
    const string & getLicense () const { return license ;}
    const int getYear () const { return year ;}
};

#endif // VEHICULO_H
