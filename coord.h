#ifndef _COORD_H
#define _COORD_H
#include <iostream>

template <class T>
class coord{

    private:
    T _x;
    T _y;

    public:
    coord(T x, T y):_x(x),_y(y){} // initialiser list
    coord():coord(0,0){} // default
    void print(){
        std::cout << "(" <<_x<<","<<_y<<")\n";
    }
};

#endif

