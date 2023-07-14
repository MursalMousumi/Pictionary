/*#include <iostream>
#include <string>
using namespace std;

int main(){
int totalScore = 0;
int roundScore = 4;
string tempArray[10];
string userInput;
string pumpkinArray[4] = {"             /}              \n      _,---~---,-~-._        \n   ,-^  \'   \'   \'    ^:,     \n  :   .    \'      \'     :    \n",
" :     /| .   /\\   \'     :   \n:   . //|    // \\   \'     :  \n:     `~` /| `^~`    \'     ; \n",
":  \'     //|         \'    :  \n:   \\-_  `~`    ,    \'    :  \n;  . \\.\\_,--,_;^/   ,    :   \n",
" :    ^-_!^!__/^   ,    :    \n  :,  ,  .        ,    :     \n    ^--_____     .   ;`      \n            `^\'\'----`        \n"};


for (int i = 0; i < 4; ++i){
 

 if(i == 0){
  tempArray[i] = pumpkinArray[0];
  cout << tempArray[i];
}
else if(i == 1){
  tempArray[i] = pumpkinArray[0] + pumpkinArray[1];
  cout << tempArray[i];
}
else if(i == 2){
  tempArray[i] = pumpkinArray[0] + pumpkinArray[1] + pumpkinArray[2];
  cout << tempArray[i];
}
else if(i == 3){
  tempArray[i] = pumpkinArray[0] + pumpkinArray[1] + pumpkinArray[2] + pumpkinArray[3];
  cout << tempArray[i];
}

 cout << "Guess: ";
 cin >> userInput;
  

  if(userInput == "pumpkin" || userInput == "Pumpkin"|| userInput == "jack o lantern" || userInput == "Jack O'Lantern" || userInput == "jack o'lantern" || userInput == "Jack O Lantern"){
    cout << "YAY! On to the next round.\n";
    break;
  }
  else if(i == 3){
    cout << "Aw. that\'s to bad.\n";
    cout << "The answer was: Pumpkin OR Jack O'Lantern\n";
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