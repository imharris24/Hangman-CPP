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
   bool AddAlphabet(char Alpha);
   void StartGame();
   bool IfWin();
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
   else if(Lifes==6) {
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
   Lifes = 0;
}
void Hangman::StartGame() {
   char Option = '\0';
   char Answer = '\0';
   bool Checker = false;
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
            WordKey = Words[rand()%9];
            Word = ConvertString(WordKey);
            GameOver = false;
            Lifes = 0;
            while (!GameOver) {
               if (Lifes>=7) {
                  system("cls");
                  GameOver = true;
                  cout << "\n\tGAME OVER\n\n\t";
                  system("pause");
                  break;
               }
               if (IfWin()) {
                  system("cls");
                  GameOver;
                  cout << "\n\tYOU WIN\n\n\t";
                  system("pause");
                  break;
               }
               system("cls");
               DisplayHangman();
               cout << "\n\tWordKey: " << WordKey << "\n";
               cout << "\n\tWord: " << Word << "\n";
               cout << "\n\tInput Alphabet: ";
               Answer = _getch();
               Checker = AddAlphabet(Answer);
               if (!Checker) {
                  this->Lifes+=1;
               }
            }
            break;
         case '2':
            exit(-1);
            break;
         default:
            break;
      }
   }
}
bool Hangman::AddAlphabet(char Alpha) {
   bool Tester = false;
   for (int i=0; i<WordKey.length(); i++) {
      if (Alpha == WordKey[i]) {
         Tester = true;
         Word[i] = WordKey[i];
      }
   }
   return Tester;
}
bool Hangman::IfWin() {
   for (int i = 0; i<Word.length(); i++) {
      if (Word[i]=='_') {
         return false;
      }
   }
   return true;
}




int main() {
   Hangman Game;
   Game.StartGame();
   return 0;
}