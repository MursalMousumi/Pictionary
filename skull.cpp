/*#include <iostream>
#include <string>
using namespace std;

int main(){
int totalScore = 0;
int roundScore = 4;
string tempArray[10];
string userInput;
string skullArray[4] = {"    .... NO! ...                  ... MNO! …       \n   ..... MNO!! ...................... MNNOO! …     \n ..... MMNO! ......................... MNNOO!! .   \n.... MNOONNOO!   MMMMMMMMMMPPPOII!   MNNO!!!! .    \n ... !O! NNO! MMMMMMMMMMMMMPPPOOOII!! NO! ....     \n",
"    ...... ! MMMMMMMMMMMMMPPPPOOOOIII! ! …         \n   ........ MMMMMMMMMMMMPPPPPOOOOOOII!! .....      \n   ........ MMMMMOOOOOOPPPPPPPPOOOOMII! …          \n    ....... MMMMM..    OPPMMP    .,OMI! ....       \n     ...... MMMM::   o.,OPMP,.o   ::I!! …          \n",
"         .... NNM:::.,,OOPM!P,.::::!! ....         \n          .. MMNNNNNOOOOPMO!!IIPPO!!O! .....       \n         ... MMMMMNNNNOO:!!:!!IPPPPOO! ....        \n           .. MMMMMNNOOMMNNIIIPPPOO!! ......       \n          ...... MMMONNMMNNNIIIOO!..........       \n",
"       ....... MN MOMMMNNNIIIIIO! OO ..........    \n    ......... MNO! IiiiiiiiiiiiI OOOO ...........  \n  ...... NNN.MNO! . O!!!!!!!!!O . OONO NO! ........\n   .... MNNNNNO! ...OOOOOOOOOOO .  MMNNON!........ \n   ...... MNNNNO! .. PPPPPPPPP .. MMNON!........   \n      ...... OO! ................. ON! .......     \n         ................................          \n"};


for (int i = 0; i < 4; ++i){
 

 if(i == 0){
  tempArray[i] = skullArray[0];
  cout << tempArray[i];
}
else if(i == 1){
  tempArray[i] = skullArray[0] + skullArray[1];
  cout << tempArray[i];
}
else if(i == 2){
  tempArray[i] = skullArray[0] + skullArray[1] + skullArray[2];
  cout << tempArray[i];
}
else if(i == 3){
  tempArray[i] = skullArray[0] + skullArray[1] + skullArray[2] + skullArray[3];
  cout << tempArray[i];
}

 cout << "Guess: ";
 cin >> userInput;
  

  if(userInput == "skull" || userInput == "Skull" || userInput == "skull and crossbones" || userInput == "Skull and Crossbones" || userInput =="Skull and crossbones"){
    cout << "YAY! On to the next round.\n";
    break;
  }
  else if(i == 3){
    cout << "Aw. that\'s to bad.\n";
    cout << "The answer was: Skull OR Skull and Crossbones\n";
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