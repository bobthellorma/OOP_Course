#include <string>
#include <iostream>
#include "pair.h"
#include "point.h"
#include "coord.h"

/* type defines for coord
typedef coord<int> coord_i;
typedef coord<double> coord_d;
typedef coord<float> coord_f;
typedef int* int_ptr;
*/

// type defines for pair
typedef Pair<int,int> Pair_ii;
typedef Pair<int,float> Pair_if;

int main(){

    /* Testing for Point class
    Point bez = Point(6,4);
    bez.print();
    */

    /* using coord class
    // calling directly
    coord <int> p1(2,5);
    coord <float> p2(3.1,4.2);
    coord <double> p3(3.45,4.61);
    p1.print();
    p2.print();
    p3.print();

    // pointers
    coord <int>* ptr1 = &p1; // points to p1
    ptr1->print(); // print p1 from ptr1
    coord <int>* ptr2 = new coord<int>(10,36);
    ptr2->print();
    */

    /* using typedef
    coord_i p1(2,5);
    coord_f p2(3.4,4.1);
    int_ptr a = new int;
    std::cout << &a;
    */

    Pair <int, int> pa1(1,2);
    Pair <int, float>pa2(1,2);
    Pair <float, double>pa3(1,3);
    Pair_if pa(1,2);
}