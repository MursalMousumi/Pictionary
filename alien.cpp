/*#include <iostream>
#include <string>
using namespace std;

int main(){
int totalScore = 0;
int roundScore = 4;
string tempArray[10];
string userInput;
string alienArray[4] = { ".     .       .  .   . .   .   . .    +  .             \n  .     .  :     .    .. :. .___---------___.          \n       .  .   .    .  :.:. _\".^ .^ ^.  '.. :\"-_. .     \n    .  :       .  .  .:../:            . .^  :.:\\.     \n        .   . :: +. :.:/: .   .    .        . . .:\\    \n .  :    .     . _ :::/:               .  ^ .  . .:\\   \n  .. . .   . - : :.:./.                        .  .:\\  \n  .      .     . :..|:                    .  .  ^. .:| \n",
"    .       . : : ..||        .                . . !:| \n  .     . . . ::. ::\\(                           . :)/ \n .   .     : . : .:.|. ######              .#######::| \n  :.. .  :-  : .:  ::|.#######           ..########:|  \n .  .  .  ..  .  .. :\\ ########          :######## :/  \n  .        .+ :: : -.:\\ ########       . ########.:/   \n    .  .+   . . . . :.:\\. #######       #######..:/    \n",
"      :: . . . . ::.:..:.\\           .   .   ..:/      \n   .   .   .  .. :  -::::.\\.       | |     . .:/       \n      .  :  .  .  .-:.\":.::.\\             ..:/         \n .      -.   . . . .: .:::.:.\\.           .:/          \n.   .   .  :      : ....::_:..:\\   ___.  :/            \n",
"   .   .  .   .:. .. .  .: :.:.:\\       :/             \n     +   .   .   : . ::. :.:. .:.|\\  .:/|              \n     .         +   .  .  ...:: ..|  --.:|              \n.      . . .   .  .  . ... :..:..\"(  ..)\"             \n .   .       .      :  .   .: ::/  .  .::\\            \n",
};


for (int i = 0; i < 4; ++i){
 

 if(i == 0){
  tempArray[i] = alienArray[0];
  cout << tempArray[i];
}
else if(i == 1){
  tempArray[i] = alienArray[0] + alienArray[1];
  cout << tempArray[i];
}
else if(i == 2){
  tempArray[i] = alienArray[0] + alienArray[1] + alienArray[2];
  cout << tempArray[i];
}
else if(i == 3){
  tempArray[i] = alienArray[0] + alienArray[1] + alienArray[2] + alienArray[3];
  cout << tempArray[i];
}

 cout << "Guess: ";
 cin >> userInput;
  

  if(userInput == "alien" || userInput == "Alien"){
    cout << "YAY! On to the next round.\n";
    break;
  }
  else if(i == 3){
    cout << "Aw. that\'s to bad.\n";
    cout << "The answer was: Alien\n";
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