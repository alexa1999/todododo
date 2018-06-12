#ifndef CONTAINER_H
#define CONTAINER_H


#include <iostream>
#include <cctype>
using namespace std;

template <typename T>
class Container {
    private:
        T elt;
    public:
        Container(const T arg);
        T inc();
};

template <>
class Container <char> {
    private:
        char elt;
    public:
        Container(const char arg) : elt(arg) {}
        char uppercase() { return toupper(elt); }
};


#endif // CONTAINER_H
