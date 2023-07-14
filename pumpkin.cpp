/*#include <iostream>
#include <string>
using namespace std;

int main(){
int totalScore = 0;
int roundScore = 4;
string tempArray[10];
string userInput;
string pumpkinArray[4] = {"            .vnmmnv%vnmnv%,.;;;:::;;::;;,  .,vnmnv%vnmnv,              \n        vnmmmnv%vnmmmnv%vnmmnv%;;;;;;;%nmmmnv%vnmmnv%vnmmnv           \n      vnmmnv%vnmmmmmnv%vnmmmmmnv%;:;%nmmmmmmnv%vnmmmnv%vnmmmnv        \n     vnmmnv%vnmmmmmnv%vnmmmmmmmmnv%vnmmmmmmmmnv%vnmmmnv%vnmmmnv       \n",
"    vnmmnv%vnmmmmmnv%vnmmmmmmmmnv%vnmmmmmmmmmmnv%vnmmmnv%vnmmmnv      \n   vnmmnv%vnmmmmmnv%vnmm;mmmmmmnv%vnmmmmmmmm;mmnv%vnmmmnv%vnmmmnv,    \n  vnmmnv%vnmmmmmnv%vnmm;' mmmmmnv%vnmmmmmmm;\' mmnv%vnmmmnv%vnmmmnv    \n  vnmmnv%vnmmmmmnv%vn;;    mmmmnv%vnmmmmmm;;    nv%vnmmmmnv%vnmmmnv   \n vnmmnv%vnmmmmmmnv%v;;      mmmnv%vnmmmmm;;      v%vnmmmmmnv%vnmmmnv  \n vnmmnv%vnmmmmmmnv%vnmmmmmmmmm;;       mmmmmmmmmnv%vnmmmmmmnv%vnmmmnv \n",
" vnmmnv%vnmmmmmmnv%vnmmmmmmmmmm;;     mmmmmmmmmmnv%vnmmmmmmnv%vnmmmnv \n vnmmnv%vnmmmmm nv%vnmmmmmmmmmmnv;, mmmmmmmmmmmmnv%vn;mmmmmnv%vnmmmnv \n vnmmnv%vnmmmmm  nv%vnmmmmmmmmmnv%;nmmmmmmmmmmmnv%vn; mmmmmnv%vnmmmnv \n `vnmmnv%vnmmmm,  v%vnmmmmmmmmmmnv%vnmmmmmmmmmmnv%v;  mmmmnv%vnnmmnv\' \n  vnmmnv%vnmmmm;,   %vnmmmmmmmmmnv%vnmmmmmmmmmnv%;\'   mmmnv%vnmmmmnv  \n",
"   vnmmnv%vnmmmm;;,   nmmm;\'              mmmm;;\'    mmmnv%vnmmmmnv\'  \n   `vnmmnv%vnmmmmm;;,.         mmnv%v;,            mmmmnv%vnmmmmnv\'   \n    `vnmmnv%vnmmmmmmnv%vnmmmmmmmmnv%vnmmmmmmnv%vnmmmmmnv%vnmmmmnv\'    \n      `vnmvn%vnmmmmmmnv%vnmmmmmmmnv%vnmmmmmnv%vnmmmmmnv%vnmmmnv\'      \n          `vn%vnmmmmmmn%:%vnmnmmmmnv%vnmmmnv%:%vnmmnv%vnmnv\'          \n"};


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