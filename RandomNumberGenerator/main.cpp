#include <iostream>
#include <string>
#include <random>
#include <ctime>

using namespace std;

/*
Two armies
attack, health and damage

*/

int main(){
  //seeding random number generator with time.
  mt19937 randomGenerator(time(NULL));
  //range
  uniform_real_distribution<float> attackRoll(0.0f, 1.0f);

  //game state
  bool gameOver = false;

  // set the dragons health.
  float dragonHealth = 10.0f;
  float attack = attackRoll(randomGenerator);

  while(gameOver == false){

    //Remove Health
    dragonHealth = dragonHealth -= attack;

    cout << "I am attacking the dragon! " << endl;
    cout << "Hit for " << attack << endl;
    cout << "Dragons health " << dragonHealth << endl;

    if(attack > 0.9f){
      cout << "CRITICAL HIT!" << endl;
    }
    else if(attack > 0.0f){
      cout << "MISS!" << endl;
    }
    else{
      cout << "Nice hit" << endl;
    }


    if(dragonHealth <= 0.0f){
      gameOver = true;
    }
    else{
      gameOver = false;
    }
  }

  system("PAUSE");
  return 0;
}
