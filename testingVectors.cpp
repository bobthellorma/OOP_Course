#include <iostream>
#include <vector>
using namespace std;

struct Point{
    public:
        int _x;
        int _y;
};

int main(){
    vector <Point> v;
    Point p1 = {50,20};
    cout << p1;
    v.push_back(p1);
    cout << v.size() << endl;

    
    for (int i = 0; i < v.size(); i++)
    {
        cout <<  << endl;
    }
    
}