#include <iostream>
#include "chef.h"
#include "italianchef.h"
using namespace std;

int main()
{
    Chef c("Jamie Oliver");
    c.getName();
    c.makeSalad(17);
    c.makeSoup(8);

    ItalianChef cc("Mario");

    cc.getName();
    cc.makeSalad(9);
    cc.askSecret("pizza", 11,15);
    cc.askSecret("Rimmeriä", 2,5);


    return 0;
}
