#include <iostream>
#include <array>
using namespace std;

int main() {

  // Arrays

  // string cars[4];
  string cars[4] = { "Volvo", "BMW", "Ford", "Mazda" };
  cout << cars[0];
  int myNum[3] = { 10, 20, 30 };
  cout << myNum[2];
  cars[0] = "Opel";
  cout << cars[0];

  // Looping
  for (int i = 0 i < 4; i++) {
    cout << cars[i] << "\n";
  }

  for (int i = 0; i < 4; i++) {
    cout << i << ": " << cars[i] << "\n"; 
  }

  cout << cars.size() << "\n"; // output 4
  cout << sizeof(cars) << endl; // posisble output 20

  return 0;
}