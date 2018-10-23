#include "Point.h"
Point::Point(int xh , int yh)
{
    x=xh;
    y=yh;
}
Point::Point()
{
    x=0;
    y=0;
}
void Point::print(){
    cout<< "(" << x << "," << y << ")" <<endl;

}
Point::Point(Point &o)
{
    x=o.y;
    y=o.x;
}
void Point::offset(int nx,int ny)
{
    x +=nx;
    y +=ny;
}
