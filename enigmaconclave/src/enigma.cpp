#include <iostream>
#include "enigma.h"
using namespace std;
enigma::enigma(string c)
{
    clave=c;
    //ctor
}
int enigma::modulo(int a,int n)
{
    int r=a-(a/n)*n;
    if(n<0)
        return r+=n;
    return r;
}
void enigma::cifrar(string msj)
{
    string s1,s2,s3,cif,K,f,ra1,ra2,ra3,ira3,ira2,ira1,ini3,ini2,ini1;
    int pos,r,r1,r2,n1,n2,n3,k1=0,k2=0,k=0,t=0,ri;
    int tamalf=alfabeto.size();
    int tammsj=msj.size();
    int cantMrot=tammsj/tamalf;
    if(tammsj%tamalf!=0){ cantMrot=cantMrot+1;}
    else{cantMrot=cantMrot;}

    int limiteR1,limiteR2,limiteR3;
    n3=alfabeto.find(clave[2]);
    n2=alfabeto.find(clave[1]);
    n1=alfabeto.find(clave[0]);
    steckers="RW";
    cout<<"\n "<<alfabeto<<"----ALFA----"<<endl;
    int p;
    for (int i=0;i<tammsj;i++)
    {

            /*-----filtro clave---*/

            /*clave rotor 3 (1-26)*/
            ri=i;
            //limiteR3=ra3.find("W");
            ira3="W";
            if(ri>=tamalf){ri=modulo(ri,tamalf);}
            else{ri=ri;}//www.youtube.com/watch?v=KsqX4hFI50Q
            //if(ini1==ira1){t=1;}else{t=0;}
            r=(n3+ri+1);
            if(r>=tamalf){r=modulo(r,tamalf);}
            else{r=r;}



            //if(p==0){ra3=alfabeto.substr(1,alfabeto.size())+alfabeto[0];p++;}//.substr(n3-tamalf+i,alfabeto.size())
            //else{ra3=alfabeto.substr(r,alfabeto.size())+alfabeto.substr(0,r);}
            ra3=alfabeto.substr(r,alfabeto.size())+alfabeto.substr(0,r);
            cout<<r<<"#"<<i<<"#"<<n3<<"##"<<" "<<ra3<<"----R3----"<<endl;
            //if(r==tamalf){r=0;}

            ini3=ra3[0];


            ira2="F";

            s2=ra2[0];
            if(ini3==ira3){k2++;}
            //else{k2=0;}
            r2=n2+k2;
            if(r2>=tamalf){r2=modulo(r2,tamalf);}
            else{r2=r2;}


            //if(s2=="A"&&k==0){ra2=alfabeto;}//.substr(1,alfabeto.size())+alfabeto[0];}
            //else{
            ra2=alfabeto.substr(r2,alfabeto.size())+alfabeto.substr(0,r2);

            //if(ini3==ira3){k2=k2+1;}
            //else{k2=0;}
            cout<<" "<<ra2<<"----R2----"<<endl;

            /*clave rotor 1 (54-80)*/

            ini2=ra2[0];


            ira1="R";


            if(ini2==ira2){k1++;}
            //else{k2=0;}
            r1=n1+k1;
            if(r1>=tamalf){r1=modulo(r1,tamalf);}
            else{r1=r1;}


            //if(s2=="A"&&k==0){ra2=alfabeto;}//.substr(1,alfabeto.size())+alfabeto[0];}
            //else{
            ra1=alfabeto.substr(r1,alfabeto.size())+alfabeto.substr(0,r1);

            ini1=ra1[0];
               cout<<" "<<ra1<<"----R1----"<<endl;





        /*------ida--------*/
        if(msj[i]==steckers[0])
        {
            msj[i]=steckers[1];
        }
        else if(msj[i]==steckers[1])
        {
            msj[i]=steckers[0];
        }
        pos=alfabeto.find(msj[i]);
        cout<<ra3[pos]<<" --> ";

        pos=alfabeto.find(ra3[pos]);
        cout<<rotor3[pos]<<" --> ";

        pos=ra3.find(rotor3[pos]);
        cout<<ra2[pos]<<" --> ";

        pos=alfabeto.find(ra2[pos]);
        cout<<rotor2[pos]<<" --> ";

        pos=ra2.find(rotor2[pos]);
        cout<<ra1[pos]<<" --> ";

        pos=alfabeto.find(ra1[pos]);
        cout<<rotor1[pos]<<" --> ";

        pos=ra1.find(rotor1[pos]);
        pos=alfabeto.find(alfabeto[pos]);
        cout<<reflector[pos]<<" --> ";





         /*------ vuelta ------*/
         pos=alfabeto.find(reflector[pos]);
         cout<<ra1[pos]<<"-->";

         pos=rotor1.find(ra1[pos]);
         pos=ra1.find(alfabeto[pos]);
         cout<<ra1[pos]<<"-->";

         pos=ra2.find(ra2[pos]);
         cout<<ra2[pos]<<"-->";


         pos=rotor2.find(ra2[pos]);
         pos=ra2.find(alfabeto[pos]);
         cout<<ra2[pos]<<"-->";

         cout<<ra3[pos]<<"-->";

         pos=rotor3.find(ra3[pos]);
         pos=ra3.find(alfabeto[pos]);
         cout<<ra3[pos]<<"-->";

         K=alfabeto[pos];
         cout<<alfabeto[pos]<<"-->";
         if(msj[i]==steckers[0])
        {
            msj[i]=steckers[1];
        }
        else if(msj[i]==steckers[1])
        {
            msj[i]=steckers[0];
        }
        cif+=K;
        cout<<"\n cifrado es  =  "<<K<<"\n\n";
        }


    //cout<<cif<<"\n\n\n";
    //return cif;
    cout<<"\n el mensaje cifrado es  =  "<<cif<<"\n\n";

}
string enigma::descifrar(string cif)
{
    string des;
    for  (int i=0;i<cif.length();i++)
    {
        int pos=alfabeto.find(cif[i]);

    }
    return des;
}

enigma::~enigma()
{
    //dtor
}
