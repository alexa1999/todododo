#include <iostream>
#include "car.h"
#include "Vehiculo.h"
#include <string>


using namespace std;

int main()
{

    car c(" VANITY ", 2003, "red");
    Vehiculo *vPtr = &c;
    cout << vPtr -> getDesc ();
}
