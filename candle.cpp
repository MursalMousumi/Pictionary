/*#include <iostream>
#include <string>
using namespace std;

int main(){
int totalScore = 0;
int roundScore = 4;
string tempArray[10];
string userInput;
string candleArray[4] = {"        __,---.__        \n     ,-\'         `-.     \n   ,\'               `.   \n  /                   \\  \n /         .           \\ \n;           )           :\n|          ((           |\n|          ) \\          |\n:         ( , )         ;\n \\       _ `|'__       / \n  \\     ( \"\"\"\"_ )     /  \n",
"   `.    )/(/( \\|   ,\'   \n     `- ()  )()|| -\'     \n         | ()  ||        \n         |     ||        \n         |     ()        \n         |     |         \n         |     |         \n         |     |         \n         |     |         \n     ____|_____|____     \n",
"    (________    ___)    \n       \\___     _/       \n       (_____  __)       \n        \\       /        \n         )__   (         \n        (____  _)        \n          |   |          \n          |   |	         \n",
"          |   |          \n          |   |          \n          |   |          \n          |   |          \n          |   |          \n        _/     \\_        \n    .--\'_________`--.    \n"};


for (int i = 0; i < 4; ++i){
 

 if(i == 0){
  tempArray[i] = candleArray[0];
  cout << tempArray[i];
}
else if(i == 1){
  tempArray[i] = candleArray[0] + candleArray[1];
  cout << tempArray[i];
}
else if(i == 2){
  tempArray[i] = candleArray[0] + candleArray[1] + candleArray[2];
  cout << tempArray[i];
}
else if(i == 3){
  tempArray[i] = candleArray[0] + candleArray[1] + candleArray[2] + candleArray[3];
  cout << tempArray[i];
}

 cout << "Guess: ";
 cin >> userInput;
  

  if(userInput == "candle" || userInput == "Candle"){
    cout << "YAY! On to the next round.\n";
    break;
  }
  else if(i == 3){
    cout << "Aw. that\'s to bad.\n";
    cout << "The answer was: Candle\n";
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