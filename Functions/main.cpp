#include <iostream>
#include <string>
#include <random>
#include <ctime>

using namespace std;

//forward declaration
int getsomethingHere();
//pass by reference
void printResults(int &numHumans);

int main(){
  int startsomethingHere;
  int somethingHere;
  int numHumans = 1;
  cout << "Start" << endl;

  somethingHere = getsomethingHere();
  startsomethingHere = somethingHere;
  cout << somethingHere << endl;

  printResults(numHumans);

  system("PAUSE");
  return 0;
}

int getsomethingHere(){
  //new scoop
  int number;
  cout << "Enter the number" << endl;
  cin >> number;
  //value expected to return
  return number;
}

void printResults(int &numHumans){
  cout << numHumans << endl;
}

void simulationTech(){

}
