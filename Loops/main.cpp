#include <iostream>
#include <string>

using namespace std;

int main(){

  int haCheck = 0;
  int hahahaCheck = 0;

  while( haCheck < 10 ){
    cout << "While Ha " << haCheck << endl;
    haCheck++;
  }

  for (int hahaCheck = 0; hahaCheck < 10; hahaCheck++){
    cout << "For Haha " << hahaCheck << endl;
  }

  do {
    cout << "Do Hahaha " << hahahaCheck << endl;
    hahahaCheck++;
  } while (hahahaCheck < 10);

  system("PAUSE");
  return 0;
}
