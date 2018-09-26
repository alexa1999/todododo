#include <iostream>
#ifndef AFFIN_H
#define AFFIN_H
#include <vector>
#include <string>
using namespace std;

class Affin
{
    public:

    int a;
    int b;
    string alfabeto="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int tam_alf;
    void Generar();
    int modulo(int a,int tam_alf);
    int mcd(int a,int tam_alf);
    vector<int> euclides_Extendido(int a, int b);
    int Inversa(int a,int n);

    string cifradoAffin(string msn);
    string descifradoAffin(string msn);

    int getA();
    int getB();
    //string alfabeto="abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ.-_0123456789";

    Affin();
    virtual ~Affin();

    protected:
    private:
};

#endif // AFFIN_H
