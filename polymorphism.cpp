#include <iostream>
#include <string>
using namespace std;

class Car
{
    protected:
    string _model;
    int _year;
    //int _top_speed;

    public:
    Car(string model, int year): _model(model),
    _year(year){}
    //int get_top_speed(){return _top_speed;}
    Car():Car("",0){}
};

class SportsCar : public Car
{
    private:
    int _top_speed;

    public:
    SportsCar(string model, int year, int top_speed)
    :Car(model,year), _top_speed(top_speed){}
    SportsCar(): SportsCar("",0,0){}
    int get_top_speed(){return _top_speed;}
};

int main()
{
    SportsCar *a_car = new SportsCar ("BMW",2007,250);
    cout << a_car->get_top_speed() << endl;
}