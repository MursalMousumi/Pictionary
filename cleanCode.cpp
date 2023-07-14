/*#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
int roundScore = 5;

string cat = " ";
string userInput;
bool found = false;
int attempts = 0;

string catPic[4] =
{
"  \\    /\\ \n",
"   )  ( ')\n",
"  (  /  ) \n",
"   \\(__)| \n"
};


while(!found){

  string userInput;

  for(int i = 0; i < 4 && i <= attempts; ++i){
    cout << catPic[i];
  }
  cout << "Guess: ";
  cin >> userInput;

  found = (userInput == "cat" || userInput == "Cat");
  roundScore--;
  attempts++;
  
}

cout << "Your score this round is: " << roundScore << endl;

//cin >> userInput; // added so console doesn't vanish in visual studio
return 0;
}*/