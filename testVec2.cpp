#include <iostream>
#include <vector>
using namespace std;

struct Point{ // create structure point
    public:
        int _x;
        int _y;
};

typedef vector <Point*> Point_v; // define a type that is a vector of pointers and is called Point_v

int main(){
    Point_v v; // declare a Point_v named v
    Point p1 = {50,20}; // declare a point
    v.push_back(&p1);

    for (int i = 0; i < v.size(); i++){
        cout << v[i]->_x << "," << v[i]->_y<<endl;
    }
}