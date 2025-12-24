#include "italianchef.h"

ItalianChef::ItalianChef() {}

ItalianChef::ItalianChef(string n)
{
    chefName=n;

    cout<<"Luodaan italialainen kokki: "<<getName()<<endl;

}

ItalianChef::~ItalianChef()
{
    cout<<"Tuhotaan Italialainen kokki: "<<getName()<<endl;
}

bool ItalianChef::askSecret(string pwd, int f, int w)
{
    if(pwd.compare(password)==0)
    {
        flour=f;
        water=w;
        cout<<"Oikea salasana"<<endl;
        makePizza();
        return true;
    }
    else
    {
        cout<<"vaara salasana!"<<endl;
        return false;
    }
}

int ItalianChef::makePizza()
{
    int annos = 0;
    int vesi = water;
    int jauho = flour;

    while(vesi>=5 && jauho >=5)
    {
        annos++;
        vesi = vesi-5;
        jauho = jauho-5;

    }

    cout<<"Italialainen kokki: " <<getName()<< " Voi tehda "<< annos <<" Pizzaa"<<endl;
    return annos;
}
