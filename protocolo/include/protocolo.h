#ifndef PROTOCOLO_H
#define PROTOCOLO_H
#include "enigma.h"
#include "Cesar.h"
#include "Affin.h"
#include <sstream>
#include <fstream>
#include <vector>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

class protocolo
{
    public:

        //string c;
        Cesar C;
        Affin A;
        enigma E;

        protocolo();
        void Crear_Keys();

        //void Cifrado(string msj);
        string Cifrado(string msj);
        void Desifrado(string cif);

        virtual ~protocolo();
    protected:
    private:
};

#endif // PROTOCOLO_H
