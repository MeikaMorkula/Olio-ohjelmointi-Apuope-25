#include "chef.h"

Chef::Chef() {}

Chef::Chef(string n)
{
    chefName = n;

    cout<<"Luodaan kokki: "<< getName()<<endl;

}

Chef::~Chef()
{
    cout<<"Tuhotaan kokki : "<<getName()<<endl;

}

int Chef::makeSalad(int amount)
{
    int amountOfSalad = (amount/5);

    cout<<"Kokki "<< getName() << " voi tehda "<<amountOfSalad<< "Annosta salattia"<<endl;

    return amountOfSalad;

}

int Chef::makeSoup(int amount)
{
    int amountOfSoup = (amount/3);


    cout<<"Kokki "<< getName() << " voi tehda "<<amountOfSoup<< "Annosta keittoa"<<endl;


    return amountOfSoup;

}

string Chef::getName()
{
    return chefName;
}
