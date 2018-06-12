#include "Container.h"
#include <iostream>
#include <cctype>
template <typename T>
Container<T>::Container(const T arg) : elt(arg) {}
template <typename T>
T Container<T>::inc() { return elt+1; }

//Container::~Container()
//{
//    //dtor
//}
