#include <iostream>
#include <string>
#include <random>
#include <ctime>

using namespace std;

void printBackpack(int backpackItems[], int numItems, string shopItems[]);

int main(){

  int numItems;
  string shopItems[] = {"Gloves", "Boots", "Helmet", "Tunic"};
  int backpackItems[] = {0,1,0,0};
  int num_elements = sizeof( shopItems ) / sizeof( shopItems[0] );
  numItems = num_elements;

  cout << numItems << " in array" << endl;

  cout << "Welcome to Hagreds, Have a look around and let me know if I can help you with anything." << endl;
  cout << "*******************" << endl;

  for(int i = 0; i < numItems; i++){
    cout << shopItems[i] << endl;
  }

  cout << "*******************" << endl;
  printBackpack(backpackItems, numItems, shopItems);

  system("PAUSE");
  return 0;
}

void printBackpack(int backpackItems[], int numItems, string shopItems[]){
  cout << "You're Inventory: " << endl;
  for(int i = 0; i < numItems; i++){
    if (backpackItems[i] > 0){
      cout << backpackItems[i] << " x " << shopItems[i] << endl;
    }
  }
}
