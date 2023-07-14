/*#include <iostream>
#include <string>
using namespace std;

int main(){
int totalScore = 0;
int roundScore = 4;
string tempArray[10];
string userInput;
string devilArray[4] = {"              ,        ,           \n             /(        )`         \n             \\ \\___   / |       \n             /- _  `-/  \'         \n            (/\\/ \\ \\   /\\     \n            / /   | `    \\       \n",
"            O O   ) /    |        \n            `-^--\'`<     \'        \n           (_.)  _  )   /         \n            `.___/`    /          \n",
"              `-----\' /           \n <----.     __ / __   \\          \n <----|====O)))==) \\) /====      \n <----\'    `--\' `.__,\' \\         \n",
"             |        |           \n               \\       /         \n         ______( (_  / \\______   \n        ,\'  ,-----\'   |        \\ \n        `--{__________)        \\/ \n"};


for (int i = 0; i < 4; ++i){
 

 if(i == 0){
  tempArray[i] = devilArray[0];
  cout << tempArray[i];
}
else if(i == 1){
  tempArray[i] = devilArray[0] + devilArray[1];
  cout << tempArray[i];
}
else if(i == 2){
  tempArray[i] = devilArray[0] + devilArray[1] + devilArray[2];
  cout << tempArray[i];
}
else if(i == 3){
  tempArray[i] = devilArray[0] + devilArray[1] + devilArray[2] + devilArray[3];
  cout << tempArray[i];
}

 cout << "Guess: ";
 cin >> userInput;
  

  if(userInput == "devil" || userInput == "Devil"){
    cout << "YAY! On to the next round.\n";
    break;
  }
  else if(i == 3){
    cout << "Aw. that\'s to bad.\n";
    cout << "The answer was: Devil\n";
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