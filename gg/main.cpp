#include <iostream>
#include <vector>
using namespace std;


template < class T> class Stack ;
template < class T>
Stack <T> operator +( const Stack <T> &s1 , const Stack <T> &s2)
{
    Stack <T> result = s1;
    for ( unsigned i = 0; i < s1. items . size (); ++i) {
        result . items . push_back (s2. items [i]);
    }
    return result ;
}



template < class T>
Stack <T> operator -( const Stack <T> &s1 , const Stack <T> &s2)
{
    Stack <T> result;
    bool t;
    for ( unsigned i = 0; i < s1.items.size (); ++i) {
        cout<<s1.items[i];
        t=false;
        for ( unsigned j = 0; j < s2.items.size (); ++j){

            if(s1.items[i]==s2.items[j]){
                t=true;
            }
        }
    T v = s1.items[i];
    //s1.items.pop_back();

    if(t==false)
        result.items.push_back(v);
    ////
    }
    return result;
}

template < class T>
class Stack {
    friend Stack <T> operator +<>( const Stack <T> &s1 , const Stack <T>&
    s2);
    friend Stack <T> operator -<>( const Stack <T> &s1 , const Stack <T>&
    s2);
    vector <T> items ;
public :
    bool empty () const { return items . empty () ;}
    void push ( const T & item ) { items . push_back ( item );}
    void print(){

        for ( unsigned j = 0; j < items.size (); ++j){
            cout<<items[j];
            cout<<"f";
        }
    }
    T pop () {
        T last = items . back ();
        items . pop_back ();
        return last ;
    }
};


//<<  ostream


/*ostream& operator << (ostream &o , const Stack <int>&s)
{
    o<<s.s1<<","<<s.s2<<endl;
    return o;

}*/


int main()
{
    Stack <int > a, b ;
    a. push (1) ;
    a. push (2) ;
    a. push (3) ;
    b. push (2) ;
    b. push (1) ;
    //cout<<a.p()<<endl;
    //cout<<b.pop()<<endl;
    //Stack <int > c = a + b;
    //cout<<c.pop()<<endl;

    Stack <int > d = a - b;
    a.print();
    //cout<<d;
    cout<<d.pop();


    //cout<<d.pop()<<endl;
}
