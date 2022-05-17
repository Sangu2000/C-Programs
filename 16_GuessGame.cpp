#include<iostream>
using namespace std;
int main(){
    int num = 7;
    int guess;
    int GuessCount = 0;
    int GuessLimit = 3;
    bool OutofGuesses = false;

    while (guess!=7 && !OutofGuesses){
        

         if (GuessCount<GuessLimit )
    {    cout<<"Enter your Guess:";
        cin>>guess;
        GuessCount++;
       
    } 
    else
    {
        OutofGuesses = true;
    }
    }

     if (OutofGuesses)
      {
          cout<<"You lose!";
      }else
      {
          cout<<"you win";
      }
    
    
return 0;
}