#include "game.h"


Game::Game(int g) {
    maxNumber = g;
}

Game::~Game()
{
    cout<<"Objekti tuhottu"<<endl;
}

void Game::Play()
{
    cout<<"Peli alkoi!"<<endl;
    srand(time(NULL));
    randomNumber= (rand()%maxNumber)+1;


    while(playerGuess!= randomNumber)
    {
        cout<<"Arvaa Numbero"<<endl;
        cin>>playerGuess;

        if(!cin.good())
        {
            //Tämä oli mielenkiintoinen selvitettävä
            //https://stackoverflow.com/questions/27003967/how-to-check-if-cin-is-int-in-c
            cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout<<"Syotteen tulee olla numero" <<endl;
            continue;
        }


        numOfGuesses++;

        if(playerGuess<randomNumber)
        {
            cout<<"Numero on suurempi kuin " << playerGuess <<endl;
        }
        else if (playerGuess>randomNumber)
        {
            cout<<"Numero on pienempi kuin " << playerGuess <<endl;
        }
    }

    cout<<"Arvasit oikein! Numero oli: "<< randomNumber <<endl;
    cout<<"Arvasit "<< numOfGuesses << " kertaa!";

    printGameResult();
}

void Game::printGameResult()
{
    cout<<"Numero Oli: " << randomNumber <<endl;
    cout<<"Arvasit " <<numOfGuesses << " Kertaa"<<endl;
}


