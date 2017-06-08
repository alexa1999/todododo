#ifndef CAR_H
#define CAR_H

#include <string>
#include "Vehiculo.h"
using namespace std;

class car: public Vehiculo
{
private:
    string style ;

public :
    car( const string & myLicense , const int myYear , const string & myStyle )
    : Vehiculo ( myLicense , myYear ), style ( myStyle ) {}
    const string & getStyle () { return style ;}

};

#endif // CAR_H
