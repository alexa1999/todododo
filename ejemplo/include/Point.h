#ifndef POINT_H
#define POINT_H


template <typename T>
class Point{
private:
    T x,y;
public:
    Point(const T u,const T v):x(u),y(v){}
    T getX(){return x;}
    T getY(){return y;}
};

#endif // POINT_H
