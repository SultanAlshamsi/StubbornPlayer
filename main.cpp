#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;

int main()
{
  SecretDoor game;
    

    int realnumber;
    int victory;




   cout<<"How many times do you want to play?\n";

   cin>>realnumber;


    for(int index=0; index<realnumber; index++)
    {

        game.newGame();
        game.guessDoorC();
        game.guessDoorC();

 if(game.isWinner()==true)

 {

 victory++;
 }
 }

 cout<<"You have won "<<victory<<endl;






  return 0;
}
