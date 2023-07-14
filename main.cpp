#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int totalScore = 0;
int randNum = 0;

void roundRepeat();
void randImageGen();
void cat();
void alien();
void candle();
void candy();
void eyeball();
void ghost();
void reaper();
void pumpkin1();
void pumpkin2();
void skull();
void spider();
void witch();
void bat();
void devil();
void vampire();

int main(){

cout << "\n\nThe Pictionary Game\n\n"
        "How to play the game:\n"
        "An ascii image will be shown and you have to guess what the ascii image is.\n"
        "Here's the catch, the image will only be shown parts by parts.\n"
        "If you guess on the\n" 
        "-first try, you get 4 points,\n" 
        "-second try, 3 points,\n"
        "-third try, 2 points,\n"
        "-forth try, 1 points,\n" 
        "and if you still can't guess after the full image is shown then\n" 
        "-you get 0 points.\n"
        "There will be a total of 5 images per round.\n"
        "\nOh, and it\'s Halloween themed!\n";


roundRepeat();

return 0;
}

void roundRepeat(){

int j = 0;
char player;

do{

  cout << "\n\nROUND " << ++j << ":\n";

  for(int i = 1; i < 6; ++i){
    cout << "\n\n\nImage " << i << "/5: \n";
    randImageGen();
  
  }

  cout << "Do you want to play another round? (Y/N): ";
  cin >> player;

  if (player == 'n' || player == 'N'){
    cout << "\nThank you for playing!\n";
  }
  else{
    continue;
  }

  }while(player == 'y'|| player == 'Y');

}

void randImageGen(){

srand(time(0));
randNum = (rand() % 14) + 1; 

switch(randNum){
    case 1: cat();
          break;
    case 2: alien();
          break;
    case 3: candle();
          break;
    case 4: candy();
          break;
    case 5: eyeball();
          break;
    case 6: ghost();
          break;
    case 7: reaper();
          break;
    case 8: pumpkin1();
          break;
   case 9: pumpkin2();
          break;
   case 10: skull();
          break;
   case 11: spider();
          break;
   case 12: witch();
          break;
   case 13: bat();
          break;
   case 14: devil();
          break;
   case 15: vampire();
          break;     
}

}


void cat(){

int roundScore = 4;
string tempArray[10];
string userInput;
string catArray[4] = { "  \\    /\\ \n",
                      "   )  ( ')  \n",
                      "  (  /  )   \n",
                      "   \\(__)|  \n"};


for (int i = 0; i < 4; ++i){
 
 if(i == 0){
  tempArray[i] = catArray[0];
  cout << tempArray[i];
}
else if(i == 1){
  tempArray[i] = catArray[0] + catArray[1];
  cout << tempArray[i];
}
else if(i == 2){
  tempArray[i] = catArray[0] + catArray[1] + catArray[2];
  cout << tempArray[i];
}
else if(i == 3){
  tempArray[i] = catArray[0] + catArray[1] + catArray[2] + catArray[3];
  cout << tempArray[i];
}

 cout << "Guess: ";
 cin >> userInput;
  

  if(userInput == "cat" || userInput == "Cat"){
    cout << "YAY! On to the next round.\n";
    break;
  }
  else if(i == 3){
    cout << "Aw. that's too bad.\n";
    cout << "The answer was: Cat\n";
  }
  else{
    cout << "Keep trying.\n";
  }

  roundScore--;

}
totalScore += roundScore;
  cout << "\nYour score this round is: " << roundScore << endl;
  cout << "Your total score is: " << totalScore << endl;
 
}

void alien(){

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

}

void candle(){

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
}

void candy(){

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

}

void eyeball(){
int roundScore = 5;
string tempArray[10];
string userInput;
string eyeballArray[5] = {"       _ _ _ _ _ _ _ _ _ _       \n    .\'              ___...-\'.    \n   /__......-----```         \\   \n  /`---...._________......---\'\\  \n",
" :                             : \n |       )\\  )\\                | \n |      (  `-. `. -.           | \n",
" |       `-. .\'`  ~  `.        | \n  \\         / `  .-.`  \\      /  \n   \\        |  `( @ ) ~|     /   \n",
"    \\       \\~ .``-\' `/     /    \n     `._     `-.___.-`   _.\'     \n        `-._         _.-\'        \n            `-.-=-.-\'            \n              ((o))              \n",
"              // \\              \n         .---/ \\_/ \\---.         \n        (   \'._____.\'   )        \n         `-------------\'         \n"};


for (int i = 0; i < 5; ++i){
 

 if(i == 0){
  tempArray[i] = eyeballArray[0];
  cout << tempArray[i];
}
else if(i == 1){
  tempArray[i] = eyeballArray[0] + eyeballArray[1];
  cout << tempArray[i];
}
else if(i == 2){
  tempArray[i] = eyeballArray[0] + eyeballArray[1] + eyeballArray[2];
  cout << tempArray[i];
}
else if(i == 3){
  tempArray[i] = eyeballArray[0] + eyeballArray[1] + eyeballArray[2] + eyeballArray[3];
  cout << tempArray[i];
}
else if(i == 4){
 tempArray[i] = eyeballArray[0] + eyeballArray[1] + eyeballArray[2] + eyeballArray[3] + eyeballArray[4];
  cout << tempArray[i];
}

 cout << "Guess: ";
 cin >> userInput;
  

  if(userInput == "eyeball" || userInput == "Eyeball" || userInput == "eyeball in a glass" || userInput == "Eyeball in a glass" || userInput == "Eyeball in a Glass" || userInput == "eyeball in a Jar" || userInput == "Eyeball in a Jar" || userInput == "eyeball in a jar"){
    cout << "YAY! On to the next round.\n";
    break;
  }
  else if(i == 4){
    cout << "Aw. that\'s to bad.\n";
    cout << "The answer was: Eyeball OR Eyeball in a Glass\n";
  }
  else{
    cout << "Keep trying.\n";
  }

  roundScore--;
}
totalScore += roundScore;
  cout << "\nYour score this round is: " << roundScore << endl;
  cout << "Your total score is: " << totalScore << endl;

}

void ghost(){

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

}

void reaper(){

  int roundScore = 4;
string tempArray[10];
string userInput;
string reaperArray[4] = {"    		 *********                               \n           *************                             \n          *****     *****                            \n         ***           ***                           \n        ***             ***                          \n        **    0     0    **                          \n",
"        **               **                  ____    \n        ***             ***             //////////   \n        ****           ****        ///////////////   \n        *****         *****    ///////////////////   \n        ******       ******/////////         |  |    \n",
"      *********     ****//////               |  |    \n   *************   **/////*****              |  |    \n  *************** **///***********          *|  |*   \n ************************************    ****| <=>*  \n*********************************************|<===>* \n",
"*********************************************| <==>* \n***************************** ***************| <=>*  \n******************************* *************|  |*   \n********************************** **********|  |*   \n*********************************** *********|  |    \n"};


for (int i = 0; i < 4; ++i){
 

 if(i == 0){
  tempArray[i] = reaperArray[0];
  cout << tempArray[i];
}
else if(i == 1){
  tempArray[i] = reaperArray[0] + reaperArray[1];
  cout << tempArray[i];
}
else if(i == 2){
  tempArray[i] = reaperArray[0] + reaperArray[1] + reaperArray[2];
  cout << tempArray[i];
}
else if(i == 3){
  tempArray[i] = reaperArray[0] + reaperArray[1] + reaperArray[2] + reaperArray[3];
  cout << tempArray[i];
}

 cout << "Guess: ";
 cin >> userInput;
  

  if(userInput == "grim reaper" || userInput == "Grim reaper" || userInput == "Grim Reaper" || userInput == "reaper" || userInput == "Reaper"){
    cout << "YAY! On to the next round.\n";
    break;
  }
  else if(i == 3){
    cout << "Aw. that\'s to bad.\n";
    cout << "The answer was: Grim Reaper\n";
  }
  else{
    cout << "Keep trying.\n";
  }

  roundScore--;
}
totalScore += roundScore;
  cout << "\nYour score this round is: " << roundScore << endl;
  cout << "Your total score is: " << totalScore << endl;

}

void pumpkin1(){
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

}

void pumpkin2(){

int roundScore = 4;
string tempArray[10];
string userInput;
string pumpkinArray[4] = {"             /}              \n      _,---~---,-~-._        \n   ,-^  \'   \'   \'    ^:,     \n  :   .    \'      \'     :    \n",
" :     /| .   /\\   \'     :   \n:   . //|    // \\   \'     :  \n:     `~` /| `^~`    \'     ; \n",
":  \'     //|         \'    :  \n:   \\-_  `~`    ,    \'    :  \n;  . \\.\\_,--,_;^/   ,    :   \n",
" :    ^-_!^!__/^   ,    :    \n  :,  ,  .        ,    :     \n    ^--_____     .   ;`      \n            `^\'\'----`        \n"};


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

}

void skull(){

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

}

void spider(){

int roundScore = 4;
string tempArray[10];
string userInput;
string spiderArray[4] = {"   	       ;               ,          \n         ,;                 \'.         \n        ;:                   :;        \n       ::                     ::       \n       ::                     ::       \n       \':                     :        \n",
"        :.                    :        \n     ;' ::                   ::  \'     \n    .\'  \';                   ;\'  *.    \n   ::    :;                 ;:    ::   \n   ;      :;.             ,;:     ::   \n   :;      :;:           ,;\"      ::   \n   ::.      \':;  ..,.;  ;:\'     ,.;:   \n    \"\'\"...   \'::,::::: ;:   .;.;***    \n",
"        ****....;:::::;,;.;***         \n    .:::.....\'\"\':::::::\'\",...;::::;.   \n   ;:\' \'\"\"\'\"\";.,;:::::;.******  \':;    \n   ;:\' \'\"\"\'\"\";.,;:::::;.******  \':;    \n ::         ,;:::::::::::;:..       :: \n ;\'     ,;;:;::::::::::::::;*;..    \':.\n::     ;:\"  ::::::\"\"\"\'::::::  \":     ::\n :.    ::   ::::::;  :::::::   :     ; \n",
"  ;    ::   :::::::  :::::::   :    ;  \n   \'   ::   ::::::....:::::\',:   \'   \n    \'  ::    :::::::::::::\"   ::       \n       ::     \':::::::::\"\'    ::       \n       \':       \"\"\"\"\"\"\"\'      ::       \n        ::                   ;:        \n        \':;                 ;:\"        \n          \';              ,;\'          \n            \"\'           \'\"            \n              \'         \'              \n"};


for (int i = 0; i < 4; ++i){
 

 if(i == 0){
  tempArray[i] = spiderArray[0];
  cout << tempArray[i];
}
else if(i == 1){
  tempArray[i] = spiderArray[0] + spiderArray[1];
  cout << tempArray[i];
}
else if(i == 2){
  tempArray[i] = spiderArray[0] + spiderArray[1] + spiderArray[2];
  cout << tempArray[i];
}
else if(i == 3){
  tempArray[i] = spiderArray[0] + spiderArray[1] + spiderArray[2] + spiderArray[3];
  cout << tempArray[i];
}

 cout << "Guess: ";
 cin >> userInput;
  

  if(userInput == "spider" || userInput == "Spider"){
    cout << "YAY! On to the next round.\n";
    break;
  }
  else if(i == 3){
    cout << "Aw. that\'s to bad.\n";
    cout << "The answer was: Spider\n";
  }
  else{
    cout << "Keep trying.\n";
  }

  roundScore--;
}
totalScore += roundScore;
  cout << "\nYour score this round is: " << roundScore << endl;
  cout << "Your total score is: " << totalScore << endl;

}

void witch(){

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

}

void bat(){

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

}

void devil(){
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
  

  if(userInput == "devil" || userInput == "Devil" || userInput == "satan" || userInput == "Satan"){
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

}

void vampire(){

int roundScore = 4;
string tempArray[10];
string userInput;
string vampireArray[4] = {"                 /######\\                  \n               /##########\\                \n              /   \\###/    \\              \n             /     \\#/      \\             \n          /\\|               |/\\           \n",
"          | | \\ ==\\    /== / | |          \n           \\|  \\<|>\\  /<|>/  |/     /|   \n    \\__     |    -   \\  -    |     /#|    \n     \\#\\     |        |      |   /###|    \n      \\##\\   |       \\|     |  /#####|   \n       \\###\\  |   _______  | /######|     \n        \\####\\ | / \\/ \\/ \\|/#######|   \n",
"        |######\\|        |#########|       \n        |########\\______/##########|       \n        |#########\\    /##########/        \n        |##########\\  |#########/\\        \n        /###########\\/########/###\\       \n",
"    /################\\######/########\\    \n   /##################\\###/###########\\   \n  /###################\\#/##############\\  \n /####################/#################\\  \n/###################/####################\\ \n"};


for (int i = 0; i < 4; ++i){
 

 if(i == 0){
  tempArray[i] = vampireArray[0];
  cout << tempArray[i];
}
else if(i == 1){
  tempArray[i] = vampireArray[0] + vampireArray[1];
  cout << tempArray[i];
}
else if(i == 2){
  tempArray[i] = vampireArray[0] + vampireArray[1] + vampireArray[2];
  cout << tempArray[i];
}
else if(i == 3){
  tempArray[i] = vampireArray[0] + vampireArray[1] + vampireArray[2] + vampireArray[3];
  cout << tempArray[i];
}

 cout << "Guess: ";
 cin >> userInput;
  

  if(userInput == "vampire" || userInput == "Vampire" || userInput == "dracula" || userInput == "Dracula"){
    cout << "YAY! On to the next round.\n";
    break;
  }
  else if(i == 3){
    cout << "Aw. that\'s to bad.\n";
    cout << "The answer was: Dracula OR Vampire\n";
  }
  else{
    cout << "Keep trying.\n";
  }

  roundScore--;
}
totalScore += roundScore;
  cout << "\nYour score this round is: " << roundScore << endl;
  cout << "Your total score is: " << totalScore << endl;

}
