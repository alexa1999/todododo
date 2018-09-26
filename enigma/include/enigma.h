#ifndef ENIGMA_H
#define ENIGMA_H
#include "string"
using namespace std;
class enigma
{
    public:
        string clave;
                         //YRUHQFLDPXNGOKMIEBFZCWVJAT
        string alfabeto="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string rotor1="EKMFLGDQVZNTOWYHXUSPAIBRCJ";
        string rotor2="AJDKSIRUXBLHWTMCQGZNPYFVOE";
        string rotor3="BDFHJLCPRTXVZNYEIWGAKMUSQO";

        string reflector="AY BR CU DH EQ FS GL IP JX KN MO TZ VW";
        enigma(string);
        virtual ~enigma();
        void cifrar(string);
        string descifrar(string );

    protected:

    private:
};

#endif // ENIGMA_H
