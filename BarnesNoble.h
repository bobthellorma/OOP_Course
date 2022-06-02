
BarnesNoble()          // inherit from base class default constructor    
BarnesNoble(string n)  // set name n  
                       // should call the corresponding constructor from the parent class
                       // with the online parameter being false
int numSoldBooks;   // attribute for numSoldBooks, initialised to 0

void soldBook();   // increments numSoldBooks
int get_numSoldBooks(); // returns the books sold