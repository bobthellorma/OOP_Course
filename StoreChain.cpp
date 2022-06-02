#include "BookStore.h"
#include "BarnesNoble.h"
#include "Dymocks.h"
#include "StoreChain.h"
#include <string>
using namespace std;

StoreChain::StoreChain() 
{
    BookStores = new BookStore*[5];

    BookStores[0] = new BarnesNoble("Springfield");
    BookStores[1] = new Dymocks(true);
    BookStores[2] = new Dymocks(false);
    BookStores[3] = new Dymocks(true);
    BookStores[4] = new BarnesNoble("Centerville");
}                         

BookStore **StoreChain::get_bookStores()      // returns the array of pointers to the five BookStore objects
{
    return BookStores;
}