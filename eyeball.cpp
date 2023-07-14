/*#include <iostream>
#include <string>
using namespace std;

int main(){
int totalScore = 0;
int roundScore = 5;
string tempArray[10];
string userInput;
string eyeballArray[5] = {"       _ _ _ _ _ _ _ _ _ _       \n    .\'              ___...-\'.    \n   /__......-----```         \\   \n  /`---...._________......---\'\\  \n",
" :                             : \n |       )\\  )\\                | \n |      (  `-. `. -.           | \n",
" |       `-. .\'`  ~  `.        | \n  \\         / `  .-.`  \\      /  \n   \\        |  `( @ ) ~|     /   \n",
"    \\       \\~ .``-\' `/     /    \n     `._     `-.___.-`   _.\'     \n        `-._         _.-\'        \n            `-.-=-.-\'            \n              ((o))              \n",
"              // \\              \n         .---/ \\_/ \\---.         \n        (   \'._____.\'   )        \n         `-------------\'         \n"};


for (int i = 0; i < 5; ++i){
 

 if(i == 0){
  tempArray[i] = eyeballArray[0];
  cout << tempArray[i];
}
else if(i == 1){
  tempArray[i] = eyeballArray[0] + eyeballArray[1];
  cout << tempArray[i];
}
else if(i == 2){
  tempArray[i] = eyeballArray[0] + eyeballArray[1] + eyeballArray[2];
  cout << tempArray[i];
}
else if(i == 3){
  tempArray[i] = eyeballArray[0] + eyeballArray[1] + eyeballArray[2] + eyeballArray[3];
  cout << tempArray[i];
}
else if(i == 4){
 tempArray[i] = eyeballArray[0] + eyeballArray[1] + eyeballArray[2] + eyeballArray[3] + eyeballArray[4];
  cout << tempArray[i];
}

 cout << "Guess: ";
 cin >> userInput;
  

  if(userInput == "eyeball" || userInput == "Eyeball" || userInput == "eyeball in a jar" || userInput == "Eyeball in a glass" || userInput == "Eyeball in a Glass"){
    cout << "YAY! On to the next round.\n";
    break;
  }
  else if(i == 4){
    cout << "Aw. that\'s to bad.\n";
    cout << "The answer was: Eyeball OR Eyeball in a Glass\n";
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