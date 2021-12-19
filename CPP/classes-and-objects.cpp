#include <iostream>
using namespace std;

// Syntax
class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};



int main() {
  MyClass myObj; // Create an object of MyClass

  // Access attributes and set values
  myObj.myNum = 15;
  myObj.myString = "Some keks";

  // Print attribute values
  cout << myObj.myNum << "\n";
  cout << myObj.myString;

  return 0;
}