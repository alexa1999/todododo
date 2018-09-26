#ifndef CESAR_H
#define CESAR_H
#include <string>

using namespace std;

class Cesar
{
    public:
        int clave;
        string alfabeto="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int tamalf=alfabeto.size();

        Cesar();


        int generaClave();
        string M_Cifrado(string m);
        string M_Desifrado(string d);
        int modulo(int a,int n);

        virtual ~Cesar();
    protected:

    private:
};

#endif // CESAR_H
