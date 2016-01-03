#include <iostream>
#include <string>

using namespace std;

int main(){

  int age;

  cout << "How old are you? " << endl;
  cin >> age;

  if (age <= 3) {
    cout << "You are a bit young to see this content, come back when you are older" << endl;
  }
  else if (age >= 12 && age <= 90){
    cout << "You are still a bit young, just a couple more years" << endl;
  }
  else{
    cout << "Welcome to the matrix!";
  }

  system("PAUSE");
  return 0;
}
