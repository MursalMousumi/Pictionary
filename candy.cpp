/*#include <iostream>
#include <string>
using namespace std;

int main(){
int totalScore = 0;
int roundScore = 6;
string tempArray[10];
string userInput;
string candyArray[6] = {"  ___      .-\"\"-.      ___  \n  \\  \"-.  /      \\  .-\"  / \n   > -=.\\/        \\/.=- <  \n",
"   > -=\'/\\        /\\\'=- <  \n  /__.-\'  \\      /  \'-.__\\ \n           \'-..-\'          \n",
"    ____    \n  .\' /  \'.  \n /  (  .-\'\\ \n|\'.__\\/__  |\n",
"|    /\\  \'.|\n \\.-\'  )  / \n  \'.__/_.\'  \n",
"      ____     \n    .\' /:::.   \n   /  (:::-\'\\  \n  |:\\__\\/__  | \n",
"  |::::/\\:::\\| \n   \\::\'  )::/  \n    \'.__/::\'   \n"};


for (int i = 0; i < 6; ++i){
 

 if(i == 0){
  tempArray[i] = candyArray[0];
  cout << tempArray[i];
}
else if(i == 1){
  tempArray[i] = candyArray[0] + candyArray[1];
  cout << tempArray[i];
}
else if(i == 2){
  tempArray[i] = candyArray[0] + candyArray[1] + candyArray[2];
  cout << tempArray[i];
}
else if(i == 3){
  tempArray[i] = candyArray[0] + candyArray[1] + candyArray[2] + candyArray[3];
  cout << tempArray[i];
}
else if(i == 4){
  tempArray[i] = candyArray[0] + candyArray[1] + candyArray[2] + candyArray[3] + candyArray[4];
  cout << tempArray[i];
}
else if(i == 5){
  tempArray[i] = candyArray[0] + candyArray[1] + candyArray[2] + candyArray[3] + candyArray[4] + candyArray[5];
  cout << tempArray[i];
}

 cout << "Guess: ";
 cin >> userInput;
  

  if(userInput == "candy" || userInput == "Candy"){
    cout << "YAY! On to the next round.\n";
    break;
  }
  else if(i == 5){
    cout << "Aw. that\'s to bad.\n";
    cout << "The answer was: Candy\n";
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