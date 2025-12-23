#include <iostream>
#include <cstdlib>

using namespace std;
int game(int maxNum);

int main()
{
    int gc = game(40);
    cout<<"Arvausten maara: "<<gc<<endl;
    return 0;
}


int game(int maxNum)
{
    int rNumber=0, guess=0, guesscount = 0;

    srand(time(NULL));
    rNumber = rand() % maxNum;

    while(guess != rNumber)
    {
        cout<<"Arvaa numero" <<endl;
        cin>>guess;
        guesscount++;

        if(guess)

        if(guess<rNumber)
        {
            cout<<"Numero on suurempi"<<endl;
        }
        else if (guess>rNumber)
        {
            cout<<"Numero on pienempi"<<endl;
        }
        else
        {
            cout<<"Virheellinen input"<<endl;
        }
    }

    cout<<"Oikea vastaus! Numero oli: "<< rNumber <<endl;

    return guesscount;
}
