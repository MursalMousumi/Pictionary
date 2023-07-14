/*#include <iostream>
#include <string>
using namespace std;

int main(){
int totalScore = 0;
int roundScore = 4;
string tempArray[10];
string userInput;
string witchArray[4] = {"    _.--****--._      \n  .*       /\\   *.   \n / ^V^   _/__\\_   \\ \n",
"/        ///'}     \\ \n| ___    /` \\      | \n",
"|-=-I>==(  \\=\\==== |\n\\ ```    >  >      / \n \\       \\ /      /  \n",
"  *._     `    _.*    \n     *--....--*       \n"};


for (int i = 0; i < 4; ++i){
 

 if(i == 0){
  tempArray[i] = witchArray[0];
  cout << tempArray[i];
}
else if(i == 1){
  tempArray[i] = witchArray[0] + witchArray[1];
  cout << tempArray[i];
}
else if(i == 2){
  tempArray[i] = witchArray[0] + witchArray[1] + witchArray[2];
  cout << tempArray[i];
}
else if(i == 3){
  tempArray[i] = witchArray[0] + witchArray[1] + witchArray[2] + witchArray[3];
  cout << tempArray[i];
}

 cout << "Guess: ";
 cin >> userInput;
  

  if(userInput == "witch" || userInput == "Witch"){
    cout << "YAY! On to the next round.\n";
    break;
  }
  else if(i == 3){
    cout << "Aw. that\'s to bad.\n";
    cout << "The answer was: Witch\n";
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