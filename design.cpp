#include <iostream>

struct Book{
    std::string title;
    std::string author;
    int numPages;
};

struct Book1{
    std::string title;
    int ID;
    int* bookID = new int;
};

void trialBook()
{
    Book b1,b2;
    b1.numPages = 100;
    b2.numPages = 76;
    b2 = b1;
    std::cout << b2.numPages << std::endl;
    b2.numPages = 83;
    std::cout << b2.numPages << std::endl;
    b1.numPages = 0;
    std::cout << b2.numPages << std::endl;
}

struct Quiz{
    int *bookID = new int;
    int *numPages = new int;
    std::string chummy;
};

void trialQuiz()
{
    Quiz b1,b2;
    *b1.numPages = 100;
    *b2.numPages = 76;
    b2 = b1;
    std::cout << *b2.numPages << std::endl;
    *b2.numPages = 83;
    std::cout << *b2.numPages << std::endl;
    *b1.numPages = 0;
    std::cout << *b2.numPages << std::endl;
}

class A{
    private:
    int _x;

    public:
    A(int x):_x(x){}; // Constructor 1
    A():_x(4){}; // if no argument called 
    int get_x(){return _x;};
};

void usingClass()
{
    A a(5); // calls 
    A b = A(5);
    std::cout << b.get_x() << std::endl;
}

void avoidingSegFault()
{
    A* c;
    A very = *c;
    std::cout << c->get_x() << std::endl;
}

int main()
{
    //trialBook();   
    //trialQuiz();
    //usingClass();   
    avoidingSegFault();
}