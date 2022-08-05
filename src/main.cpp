#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

class Hangman {
   public:
   bool GameOver;
   int Lifes;
   string WordKey="\0", Word="\0";
   const string Words[10]={"deadpan", "string", "country", "sky", "flavour", "huge", "water", "theory", "spooky", "cloudy"};

   Hangman();
   void DisplayHangman();
   string ConvertString(string str);
   void StartGame();
};
string Hangman::ConvertString(string str) {
      string con = str;
      for (int i=0; i<=con.length(); i++) {
         if (con[i] == 32) {
            continue;
         }
         else {
            con[i] = 95;
         }
      }
      return con;
    }
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
void Hangman::StartGame() {
   char Option = '\0';
   while (true) {
      system("cls");
      cout << "\n\tHANGMAN\n\n";
      cout << "\t1. Start Game\n";
      cout << "\t2. Exit\n";
      cout << "\t   Option: ";
      Option=_getche();
      cout << "\n";
      switch(Option) {
         case '1':
            break;
         case '2':
            exit(-1);
            break;
         default:
            break;
      }
   }
}





int main() {
   Hangman Game;
   Game.StartGame();
   return 0;
}