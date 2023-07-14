/*#include <iostream>
#include <string>
using namespace std;

int main(){
int totalScore = 0;
int roundScore = 4;
string tempArray[10];
string userInput;
string ghostArray[4] = {"                   __---__                               \n                    _-       _--______                   \n               __--( /     \\ )XXXXXXXXXXXXX_            \n             --XXX(   O   O  )XXXXXXXXXXXXXXX-           \n            /XXX(       U     )        XXXXXXX\\         \n",
"          /XXXXX(              )--_  XXXXXXXXXXX\\       \n         /XXXXX/ (      O     )   XXXXXX   \\XXXXX\\     \n         XXXXX/   /            XXXXXX   \\__ \\XXXXX---- \n         XXXXXX__/          XXXXXX         \\__----  -   \n ---___  XXX__/          XXXXXX      \\__         ---    \n",
"   --  --__/   ___/\\  XXXXXX            /  ___---=      \n     -_    ___/    XXXXXX              \'--- XXXXXX       \n       --\\/XXX\\ XXXXXX                      /XXXXX     \n         \\XXXXXXXXX                        /XXXXX/      \n          \\XXXXXX                        _/XXXXX/       \n",
"            \\XXXXX--__/              __-- XXXX/         \n             --XXXXXXX---------------  XXXXX--           \n                \\XXXXXXXXXXXXXXXXXXXXXXXX-              \n                  --XXXXXXXXXXXXXXXXXX-””                \n"};


for (int i = 0; i < 4; ++i){
 

 if(i == 0){
  tempArray[i] = ghostArray[0];
  cout << tempArray[i];
}
else if(i == 1){
  tempArray[i] = ghostArray[0] + ghostArray[1];
  cout << tempArray[i];
}
else if(i == 2){
  tempArray[i] = ghostArray[0] + ghostArray[1] + ghostArray[2];
  cout << tempArray[i];
}
else if(i == 3){
  tempArray[i] = ghostArray[0] + ghostArray[1] + ghostArray[2] + ghostArray[3];
  cout << tempArray[i];
}

 cout << "Guess: ";
 cin >> userInput;
  

  if(userInput == "ghost" || userInput == "Ghost" || userInput == "ghostbusters" || userInput == "Ghostbusters"){
    cout << "YAY! On to the next round.\n";
    break;
  }
  else if(i == 3){
    cout << "Aw. that\'s to bad.\n";
    cout << "The answer was: Ghost OR Ghostbusters\n";
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