#include <iostream>
#include "enigma.h"
using namespace std;
enigma::enigma()
{

    //ctor
}
string enigma::claveEnig(string c)
{
    clvn=c.substr(0,3);
    clave=c.substr(3,3);
    limitrot=c.substr(6,3);
    stecker=c.substr(9,2);

}
vector<string> enigma::ArrayRotores()
{
    vector<string> EE;
    EE.push_back(rotor01);
    EE.push_back(rotor02);
    EE.push_back(rotor03);
    EE.push_back(rotor04);
    EE.push_back(rotor05);
    EE.push_back(rotor06);
    EE.push_back(rotor07);
    EE.push_back(rotor08);
//    EE.push_back(rotor09);
    return EE;
}
vector<int> enigma::Num_Rotores_a_usar()
{
    vector<int> rot;
    num=String_to_int(clvn);
    string c1,c2,c3,m;
    int r1,r2,r3;
    m=int_to_String(num);
    c1=m[0];c2=m[1];c3=m[2];
    r1=String_to_int(c1);
    r2=String_to_int(c2);
    r3=String_to_int(c3);
    rot.push_back(r1);
    rot.push_back(r2);
    rot.push_back(r3);

    return rot;

}
vector<string> enigma::Orden_Rotores()
{
    vector<string> result;
    vector<string> Arr=ArrayRotores();
    vector<int> Numeros=Num_Rotores_a_usar();
    string ro1,ro2,ro3;
    int v1,v2,v3;
    v1=Numeros[0];v2=Numeros[1];v3=Numeros[2];
    ro1=Arr[v1];
    ro2=Arr[v2];
    ro3=Arr[v3];
    result.push_back(ro1);
    result.push_back(ro2);
    result.push_back(ro3);

    return result;
}
int enigma::modulo(int a,int n)
{
    int r=a-(a/n)*n;
    if(n<0)
        return r+=n;
    return r;
}
void enigma::definicionRotores()
{
    vector<string>Def_rotores=Orden_Rotores();
    rotor1=rotor01;//Def_rotores[0];
    //cout<<rotor1<<endl;
    rotor2=rotor02;//Def_rotores[1];
    rotor3=rotor03;//Def_rotores[2];
}
string enigma::cifrar(string msj)
{
    definicionRotores();
    string s1,s2,s3,cif,K,f,ra1,ra2,ra3,ira3,ira2,ira1,ini3,ini2,ini1;
    int pos,r,r1,r2,n1,n2,n3,k1=0,k2=0,k=0,t=0,ri;
    int tamalf=alfabeto.size();
    int tammsj=msj.size();

//    string stck1=stecker[0],stck2=stecker[1];

    n3=alfabeto.find(clave[2]);
    n2=alfabeto.find(clave[1]);
    n1=alfabeto.find(clave[0]);
    //cout<<"\n "<<alfabeto<<"----ALFA----"<<endl;
    int p;
    for (int i=0;i<tammsj;i++)
    {

            /*-----filtro clave---*/

            /*clave rotor 3 (1-26)*/
            ri=i;
            //limiteR3=ra3.find("W");
            ira3=limitrot[2];
            if(ri>=tamalf){ri=modulo(ri,tamalf);}
            else{ri=ri;}//www.youtube.com/watch?v=KsqX4hFI50Q
            //if(ini1==ira1){t=1;}else{t=0;}
            r=(n3+ri+1);
            if(r>=tamalf){r=modulo(r,tamalf);}
            else{r=r;}
            //p=ra3.find("A");


            //if(p==0){ra3=alfabeto.substr(1,alfabeto.size())+alfabeto[0];p++;}//.substr(n3-tamalf+i,alfabeto.size())
            //else{ra3=alfabeto.substr(r,alfabeto.size())+alfabeto.substr(0,r);}
            ra3=alfabeto.substr(r,alfabeto.size())+alfabeto.substr(0,r);
            //cout<<r<<"#"<<i<<"#"<<n3<<"##"<<" "<<ra3<<"----R3----"<<endl;
            //if(r==tamalf){r=0;}
             /*clave rotor 2 (27-53)*/

            ini3=ra3[0];


            ira2=limitrot[1];
            f=clave[1];
            s2=ra2[0];
            if(ini3==ira3){k2++;}
            //else{k2=0;}
            //if(f=="E"&&i==0){k2=k2+1;}

            r2=n2+k2;
            if(r2>=tamalf){r2=modulo(r2,tamalf);}
            else{r2=r2;}


            //if(s2=="A"&&k==0){ra2=alfabeto;}//.substr(1,alfabeto.size())+alfabeto[0];}
            //else{
            ra2=alfabeto.substr(r2,alfabeto.size())+alfabeto.substr(0,r2);

            //if(ini3==ira3){k2=k2+1;}
            //else{k2=0;}
            //cout<<" "<<ra2<<"----R2----"<<endl;

            /*clave rotor 1 (54-80)*/

            ini2=ra2[0];


            ira1=limitrot[0];


            if(ini2==ira2&&k==0){k1++;}
            //if(f=="E"&&i==0){k1=k1+1;}
            //else{k1=0;}
            r1=n1+k1;
            if(r1>=tamalf){r1=modulo(r1,tamalf);}
            else{r1=r1;}
            k=1;


            //if(s2=="A"&&k==0){ra2=alfabeto;}//.substr(1,alfabeto.size())+alfabeto[0];}
            //else{
            ra1=alfabeto.substr(r1,alfabeto.size())+alfabeto.substr(0,r1);

            ini1=ra1[0];
              // cout<<" "<<ra1<<"----R1----"<<endl;

        if(msj[i]==stecker[0]){msj[i]=stecker[1];}
        if(msj[i]==stecker[1]){msj[i]=stecker[0];}
        //else{msj[i]=msj[i];}

        /*------ida--------*/

        pos=alfabeto.find(msj[i]);
//        cout<<ra3[pos]<<" --> ";

        pos=alfabeto.find(ra3[pos]);
//        cout<<rotor3[pos]<<" --> ";

        pos=ra3.find(rotor3[pos]);
        //cout<<ra2[pos]<<" --> ";

        pos=alfabeto.find(ra2[pos]);
        //cout<<rotor2[pos]<<" --> ";

        pos=ra2.find(rotor2[pos]);
        //cout<<ra1[pos]<<" --> ";

        pos=alfabeto.find(ra1[pos]);
        //cout<<rotor1[pos]<<" --> ";

        pos=ra1.find(rotor1[pos]);
        pos=alfabeto.find(alfabeto[pos]);
        //cout<<reflector[pos]<<" --> ";





         /*------ vuelta ------*/
         pos=alfabeto.find(reflector[pos]);
         //cout<<ra1[pos]<<"-->";

         pos=rotor1.find(ra1[pos]);
         pos=ra1.find(alfabeto[pos]);
         //cout<<ra1[pos]<<"-->";

         pos=ra2.find(ra2[pos]);
         //cout<<ra2[pos]<<"-->";


         pos=rotor2.find(ra2[pos]);
         pos=ra2.find(alfabeto[pos]);
         //cout<<ra2[pos]<<"-->";

         //cout<<ra3[pos]<<"-->";

         pos=rotor3.find(ra3[pos]);
         pos=ra3.find(alfabeto[pos]);
         //cout<<ra3[pos]<<"-->";
         if(msj[i]==stecker[0]){msj[i]=stecker[1];}
         if(msj[i]==stecker[1]){msj[i]=stecker[0];}


         K=alfabeto[pos];
         //cout<<alfabeto[pos]<<"-->";


        cif+=K;
        //cout<<"\n cifrado es  =  "<<K<<"\n\n";
        }


    //cout<<cif<<"\n\n\n";
    return cif;
    //cout<<"\n el mensaje cifrado es  =  "<<cif<<"\n\n";

}
string enigma::descifrar(string cif)
{
    definicionRotores();
    string des,s1,s2,s3,K,f,ra1,ra2,ra3,ira3,ira2,ira1,ini3,ini2,ini1;
    int pos,pos1,pos2,pos3,r,r1,r2,n1,n2,n3,k1=0,k2=0,k=0,t=0,ri;
    int tamalf=alfabeto.size();
    int tammsj=cif.size();

    pos3=alfabeto.find(clave[2]);
    pos2=alfabeto.find(clave[1]);
    pos1=alfabeto.find(clave[0]);

    n3=alfabeto.find(rotor3[0]);
    n2=alfabeto.find(rotor2[0]);
    n1=alfabeto.find(rotor1[0]);
    //cout<<"\n "<<alfabeto<<"----ALFA----"<<endl;
    int p;
    for (int i=0;i<tammsj;i++)
    {

            /*-----filtro clave---*/

            /*clave rotor 3 (1-26)*/
            ri=i;
            //limiteR3=ra3.find("W");
            ira3=limitrot[2];
            if(ri>=tamalf){ri=modulo(ri,tamalf);}
            else{ri=ri;}//www.youtube.com/watch?v=KsqX4hFI50Q
            //if(ini1==ira1){t=1;}else{t=0;}
            r=(pos3+ri+1);
            if(r>=tamalf){r=modulo(r,tamalf);}
            else{r=r;}
            p=ra3.find("A");


            //if(p==0){ra3=alfabeto.substr(1,alfabeto.size())+alfabeto[0];p++;}//.substr(n3-tamalf+i,alfabeto.size())
            //else{ra3=alfabeto.substr(r,alfabeto.size())+alfabeto.substr(0,r);}
            ra3=alfabeto.substr(r,alfabeto.size())+alfabeto.substr(0,r);
            //cout<<r<<"#"<<i<<"#"<<n3<<"##"<<" "<<ra3<<"----R3----"<<endl;
            //if(r==tamalf){r=0;}
             /*clave rotor 2 (27-53)*/

            ini3=ra3[0];


            ira2=limitrot[1];
            f=clave[1];
            s2=ra2[0];
            if(ini3==ira3){k2++;}
            //else{k2=0;}
            //if(f=="E"&&i==0){k2=k2+1;}

            r2=pos2+k2;
            if(r2>=tamalf){r2=modulo(r2,tamalf);}
            else{r2=r2;}


            //if(s2=="A"&&k==0){ra2=alfabeto;}//.substr(1,alfabeto.size())+alfabeto[0];}
            //else{
            ra2=alfabeto.substr(r2,alfabeto.size())+alfabeto.substr(0,r2);

            //if(ini3==ira3){k2=k2+1;}
            //else{k2=0;}
            //cout<<" "<<ra2<<"----R2----"<<endl;

            /*clave rotor 1 (54-80)*/

            ini2=ra2[0];


            ira1=limitrot[0];


            if(ini2==ira2){k1++;}
            //if(f=="E"&&i==0){k1=k1+1;}
            //else{k1=0;}
            r1=pos1+k1;
            if(r1>=tamalf){r1=modulo(r1,tamalf);}
            else{r1=r1;}



            //if(s2=="A"&&k==0){ra2=alfabeto;}//.substr(1,alfabeto.size())+alfabeto[0];}
            //else{
            ra1=alfabeto.substr(r1,alfabeto.size())+alfabeto.substr(0,r1);

            ini1=ra1[0];
              // cout<<" "<<ra1<<"----R1----"<<endl;
        //if(cif[i]==stecker[0]){cif[i]=stecker[1];}
        //if(cif[i]==stecker[1]){cif[i]=stecker[0];}


        /*------ida--------*/

        pos=alfabeto.find(cif[i]);
        //cout<<ra3[pos]<<" --> ";

        pos=alfabeto.find(ra3[pos]);
        //cout<<rotor3[pos]<<" --> ";

        pos=ra3.find(rotor3[pos]);
        //cout<<ra2[pos]<<" --> ";

        pos=alfabeto.find(ra2[pos]);
        //cout<<rotor2[pos]<<" --> ";

        pos=ra2.find(rotor2[pos]);
        //cout<<ra1[pos]<<" --> ";

        pos=alfabeto.find(ra1[pos]);
        //cout<<rotor1[pos]<<" --> ";

        pos=ra1.find(rotor1[pos]);
        pos=alfabeto.find(alfabeto[pos]);
        //cout<<reflector[pos]<<" --> ";





         /*------ vuelta ------*/
         pos=alfabeto.find(reflector[pos]);
         //cout<<ra1[pos]<<"-->";

         pos=rotor1.find(ra1[pos]);
         pos=ra1.find(alfabeto[pos]);
         //cout<<ra1[pos]<<"-->";

         pos=ra2.find(ra2[pos]);
         //cout<<ra2[pos]<<"-->";


         pos=rotor2.find(ra2[pos]);
         pos=ra2.find(alfabeto[pos]);
         //cout<<ra2[pos]<<"-->";

         //cout<<ra3[pos]<<"-->";

         pos=rotor3.find(ra3[pos]);
         pos=ra3.find(alfabeto[pos]);
         //cout<<ra3[pos]<<"-->";
         //if(cif[i]==stecker[0]){cif[i]=stecker[1];}
         //if(cif[i]==stecker[1]){cif[i]=stecker[0];}


         K=alfabeto[pos];
         //cout<<alfabeto[pos]<<"-->";


        des+=K;
        //cout<<"\n cifrado es  =  "<<K<<"\n\n";
        }


    //cout<<cif<<"\n\n\n";
    //return cif;
//    cout<<"\n el mensaje cifrado es  =  "<<des<<"\n\n";

    return des;
}
string enigma::int_to_String(int num){
    stringstream convert;
    convert<<num;
    return convert.str();
}

int enigma::String_to_int(string cadena){
    stringstream sst(cadena);
    int num;
    sst >> num;
    return num;
}

enigma::~enigma()
{
    //dtor
}
