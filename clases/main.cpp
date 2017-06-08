#include <iostream>
#include <math.h>


using namespace std;
class point {
    public:
    double x;
    double y;
};

class Vector {
    public:
        point start;
        point end1;
    void origen_start()
    {
        start.x=0;
        start.y=0;
    }

    void impri()
    {
        cout << "(" << start.x << "," << start.y << ") -> (" << end1.x <<"," << end1.y << ")" << endl;
    }
    double distacia()
  {
       return sqrt(pow(end1.x-start.x,2)+pow(end1.y-start.y,2));
  }

};

int main()
{
    Vector p;
    p.start.x=1; p.end1.x=2; p.start.y=3; p.end1.y=4;
    //p.origen_start();
    p.impri();
    cout << p.distacia();
}
