#include <iostream>
#include <string>

using namespace std;

int main(){

  string playerName;
  int age;

  cout << "What would you like your character name to be?" << endl;
  cin >> playerName;

  cout << "Hello " << playerName << "," << endl;
  cout << "How old are you?" << endl;
  cin >> age;

  if (age >= 5){
    cout << "You are too old to play this game." << endl;
  }
  else{
    cout << "Have FUN!" << endl;
  }

  system("PAUSE");
  return 0;
}
