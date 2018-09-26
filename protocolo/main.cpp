#include <iostream>
#include "string"
#include <fstream>
#include <sstream>
#include <time.h>
#include <stdlib.h>
#include "protocolo.h"
using namespace std;

int main()
{
    // Receptor;

    srand(time(NULL));
    protocolo P;

    P.Crear_Keys();
    //Receptor.Generador_claves();
    int op;

    do{
            cout<< " ELIGE UNA OPCION: "<<endl;
            //cout<< " 1. GENERAR KEYS "<<endl;
            cout<< " 1. ENCRIPTAR "<<endl;
            cout<< " 2. DESENCRIPTAR "<<endl;
            cout<< " 3. SALIR "<<endl;
            cin>>op;


            switch(op)
            {
                case 1:{
                        /*int e,N;
                        cout<<"a: "<<endl;
                        cin>>e;
                        cout<<"b: "<<endl;
                        cin>>N;*/
                        //e=conv<ZZ>(Receptor.e);
                        //N=conv<ZZ>(Receptor.N);
                        //7cout<<"e: "<<e<<endl;
                        //cout<<"N: "<<N<<endl;
                        //RSA Emisor(e,N);

                        string Cipher;
                        string mnsj;
                        string linea;
                        ifstream CIPHER ("plaintext.txt");
                        if (CIPHER.is_open())
                        {
                            while (!CIPHER.eof())
                            {
                                getline(CIPHER,linea);//lee linea a linea reconociendo el enter
                                mnsj+=linea;
                            }
                            CIPHER.close();
                        }


                        Cipher=P.Cifrado(mnsj);
                        //P.Cifrado(mnsj);

                        ofstream ciphertext;
                        ciphertext.open("ciphertext.txt");
                        ciphertext<<Cipher;
                        cout<<"MSJ Cifrado: "<<endl;
                        cout<<Cipher<<endl;


                        break;}
                case 2:{
                        //ZZ Cipher= conv<ZZ>(1806073159);
                        string Cipher;
                        string linea;
                        ifstream CIPHER ("ciphertext.txt");
                        if (CIPHER.is_open())
                        {
                            while (!CIPHER.eof())
                            {
                                getline(CIPHER,linea);//lee linea a linea reconociendo el enter
                                Cipher+=linea;
                            }
                            CIPHER.close();
                        }
                        string Descipher;
                        //Descipher= Receptor.Descifrado(Cipher);
                        //P.Desifrado(Cipher);
                        cout<<"MSJ Descifrado: "<<endl;
                        P.Desifrado(Cipher);
                        //cout<<Descipher<<endl;


                        break;}

            }
    }while(op!=3);

    system("pause");

}
