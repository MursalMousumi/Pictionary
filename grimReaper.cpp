/*#include <iostream>
#include <string>
using namespace std;

int main(){
int totalScore = 0;
int roundScore = 4;
string tempArray[10];
string userInput;
string reaperArray[4] = {"    		 *********                               \n           *************                             \n          *****     *****                            \n         ***           ***                           \n        ***             ***                          \n        **    0     0    **                          \n",
"        **               **                  ____    \n        ***             ***             //////////   \n        ****           ****        ///////////////   \n        *****         *****    ///////////////////   \n        ******       ******/////////         |  |    \n",
/*"      *********     ****//////               |  |    \n   *************   **/////*****              |  |    \n  *************** **///***********          *|  |*   \n ************************************    ****| <=>*  \n*********************************************|<===>* \n",*/
/*"*********************************************| <==>* \n***************************** ***************| <=>*  \n******************************* *************|  |*   \n********************************** **********|  |*   \n*********************************** *********|  |    \n"};


for (int i = 0; i < 4; ++i){
 

 if(i == 0){
  tempArray[i] = reaperArray[0];
  cout << tempArray[i];
}
else if(i == 1){
  tempArray[i] = reaperArray[0] + reaperArray[1];
  cout << tempArray[i];
}
else if(i == 2){
  tempArray[i] = reaperArray[0] + reaperArray[1] + reaperArray[2];
  cout << tempArray[i];
}
else if(i == 3){
  tempArray[i] = reaperArray[0] + reaperArray[1] + reaperArray[2] + reaperArray[3];
  cout << tempArray[i];
}

 cout << "Guess: ";
 cin >> userInput;
  

  if(userInput == "grim reaper" || userInput == "Grim reaper" || userInput == "Grim Reaper"){
    cout << "YAY! On to the next round.\n";
    break;
  }
  else if(i == 3){
    cout << "Aw. that\'s to bad.\n";
    cout << "The answer was: Grim Reaper\n";
  }
  else{
    cout << "Keep trying.\n";
  }

  roundScore--;
}
totalScore += roundScore;
  cout << "\nYour score this round is: " << roundScore << endl;
  cout << "Your total score is: " << totalScore << endl;

  return 0;
  }*/