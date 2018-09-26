#ifndef CESAR_H
#define CESAR_H
#include <iostream>
#include <string>
using namespace std;

class cesar
{
    public:
        string alfabeto;
        cesar(int);
        string cifrar(string);
        string descifrar(string);
    private:
        int clave;
};

#endif // CESAR_H
