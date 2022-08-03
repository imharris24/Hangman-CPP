#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

class Hangman {
    public:
    bool GameOver;
    int Lifes;
    void DisplayHangman();
    
};

void Hangman::DisplayHangman() {
    if (Lifes==0) {
       cout << "\n\t   +---+";
       cout << "\n\t   |   |";
       cout << "\n\t       |";
       cout << "\n\t       |";
       cout << "\n\t       |";
       cout << "\n\t       |";
       cout << "\n\t========";
    }
    else if(Lifes==1) {
       cout << "\n\t   +---+";
       cout << "\n\t   |   |";
       cout << "\n\t   o   |";
       cout << "\n\t       |";
       cout << "\n\t       |";
       cout << "\n\t       |";
       cout << "\n\t========";
    }
    else if(Lifes==2) {
       cout << "\n\t   +---+";
       cout << "\n\t   |   |";
       cout << "\n\t   o   |";
       cout << "\n\t   |   |";
       cout << "\n\t       |";
       cout << "\n\t       |";
       cout << "\n\t========";
    }
    else if(Lifes==3) {
       cout << "\n\t   +---+";
       cout << "\n\t   |   |";
       cout << "\n\t   o   |";
       cout << "\n\t  /|   |";
       cout << "\n\t       |";
       cout << "\n\t       |";
       cout << "\n\t========";
    }
    else if(Lifes==4) {
       cout << "\n\t   +---+";
       cout << "\n\t   |   |";
       cout << "\n\t   o   |";
       cout << "\n\t  /|\\  |";
       cout << "\n\t       |";
       cout << "\n\t       |";
       cout << "\n\t========";
    }
    else if(Lifes==5) {
       cout << "\n\t   +---+";
       cout << "\n\t   |   |";
       cout << "\n\t   o   |";
       cout << "\n\t  /|\\  |";
       cout << "\n\t  /    |";
       cout << "\n\t       |";
       cout << "\n\t========";
    }
    else if(Lifes==7) {
       cout << "\n\t   +---+";
       cout << "\n\t   |   |";
       cout << "\n\t   o   |";
          cout << "\n\t  /|\\  |";
       cout << "\n\t  / \\  |";
       cout << "\n\t       |";
       cout << "\n\t========";
    }
    cout << "\n";
    }
Hangman::Hangman() {
    GameOver = false;
    Lifes = -1;
}






int main() {
    Hangman Game;

    return 0;
}