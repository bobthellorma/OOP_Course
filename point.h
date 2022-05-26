#ifndef _POINT_H
#define _POINT_H
#include <iostream>

class Point{

    private:
    int _x;
    int _y;

    public:
    Point(int x, int y):_x(x),_y(y){} // initialiser list
    Point():Point(0,0){} // default
    void print(){
        std::cout << "(" <<_x<<","<<_y<<")\n";
    }
};

#endif

