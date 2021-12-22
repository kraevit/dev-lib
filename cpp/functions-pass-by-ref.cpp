#include <iostream>
using namespace std;

void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}

int main() {
  int firstNum = 10;
  int secondtNum = 20;

  cout << "Before swap: " << "\n";
  cout << firstNum << secondtNum << "\n";

  // call the funcion, wich will change the values of firstNum and secondNum
  swapNums(firstNum, secondNum);

  cout << "After swap: " << "\n";
  cout << firstNum << secondtNum << "\n";

  return 0;
}