#include <iostream>
#include <string>

using namespace std;

/* This is where the program starts */
int main(){

  bool gameOver = false;

  for (int i = 0; i < 100; i++) {
    cout << i << endl;
  }
  // Game Loop
  while (gameOver == false){
    // Game Things
    cout << "Game Ending" << endl;
    gameOver = true;
  }

  system("PAUSE");
  return 0;
}
