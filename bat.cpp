/*#include <iostream>
#include <string>
using namespace std;

int main(){
int totalScore = 0;
int roundScore = 4;
string tempArray[10];
string userInput;
string batArray[4] = {"                _-.                       .-_                          \n              _..-(                       )`-.._                       \n           ./'. *||\\\\.       (\\_/)       .//||` .`\\.                \n",
"        ./'.|'.'||||\\\\|..    )*.*(    ..|//||||`.`|.`\\.              \n     ./'..|'.|| |||||\\```````  \"  \'\'\'\'\'\'\'/||||| ||.`|..`\\.           \n   ./'.||'.|||| ||||||||||||.     .|||||||||||| ||||.`||.`\\.          \n",
"  /\'|||\'.|||||| ||||||||||||{     }|||||||||||| ||||||.`|||`\\         \n \'.|||\'.||||||| ||||||||||||{     }|||||||||||| |||||||.`|||.`         \n'.||| ||||||||| |/\'   ``\\||/`     \'\\||/\'\'   `\\| ||||||||| |||.`     \n",
"|/\' \\./\'     `\\./          |/\\   /\\|          \\./\'     `\\./ `\\| \nV    V         V          }\' `\\ /\' `{          V         V    V       \n`    `         `               U               \'         \'             \n"};


for (int i = 0; i < 4; ++i){
 

 if(i == 0){
  tempArray[i] = batArray[0];
  cout << tempArray[i];
}
else if(i == 1){
  tempArray[i] = batArray[0] + batArray[1];
  cout << tempArray[i];
}
else if(i == 2){
  tempArray[i] = batArray[0] + batArray[1] + batArray[2];
  cout << tempArray[i];
}
else if(i == 3){
  tempArray[i] = batArray[0] + batArray[1] + batArray[2] + batArray[3];
  cout << tempArray[i];
}

 cout << "Guess: ";
 cin >> userInput;
  

  if(userInput == "bat" || userInput == "Bat"){
    cout << "YAY! On to the next round.\n";
    break;
  }
  else if(i == 3){
    cout << "Aw. that\'s to bad.\n";
    cout << "The answer was: Bat\n";
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