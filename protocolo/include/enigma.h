#include <iostream>
#ifndef ENIGMA_H
#define ENIGMA_H
#include "string"
#include <vector>
#include <sstream>
using namespace std;
class enigma
{
    public:
        string clave,clvn,limitrot,stecker;
        int num;
        string rotor1,rotor2,rotor3;
                         //YRUHQFLDPXNGOKMIEBFZCWVJAT
        string alfabeto= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string rotor01=   "EKMFLGDQVZNTOWYHXUSPAIBRCJ";
        string rotor02=   "AJDKSIRUXBLHWTMCQGZNPYFVOE";
        string rotor03=   "BDFHJLCPRTXVZNYEIWGAKMUSQO";
        string rotor04=   "ESOVPZJAYQUIRHXLNFTGKDCMWB";
        string rotor05=   "VZBRGITYUPSDNHLXAWMJQOFECK";
        string rotor06=   "JPGVOUMFYQBENHZRDKASXLICTW";
        string rotor07=   "NZJHGRCXMYSWBOUFAIVLPEKQDT";
        string rotor08=   "FKQHTLXOCBJSPDZRAMEWNIUYGV";
        //string rotor09=   "LEYJVCNIXWPBQMDRTAKZGFUHOS";


        string reflector="YRUHQSLDPXNGOKMIEBFZCWVJAT";
        //(AY) (BR) (CU) (DH) (EQ) (FS) (GL) (IP) (JX) (KN) (MO) (TZ) (VW)
        enigma();
        string claveEnig(string);

        string cifrar(string);
        string descifrar(string );

        vector<string> ArrayRotores();
        vector<int> Num_Rotores_a_usar();
        vector<string> Orden_Rotores();
        void definicionRotores();
        int modulo(int a,int n);
        string int_to_String(int num);
        int String_to_int(string cadena);


        virtual ~enigma();



    protected:

    private:
};

#endif // ENIGMA_H
