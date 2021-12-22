#include <iostream>
#include <string>
using namespace std;

int main() {

  // Pointer
  // Variable that stores the memory address as its value

  string food = "Pizza";
  string* pointer = &food;

  cout << food << "\n";
  cout << pointer << "\n";

  // Dereferencing
  cout << *pointer << "\n"; // Output the value of food with the pointer (Pizza)

  // Modify pointers
  string food = "Pizza";
  string* pointer = food;

  cout << food << "\n";
  cout << &food << "\n";
  cout << *food << "\n";

  *pointer = "Hamburger" 

  cout << *pointer << "\n"; // Hamburger
  cout << food << "\n"; // Hamburger

  return 0;
}