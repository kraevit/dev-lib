#include <iostream>
using namespace std;

// Declare functions
void myFunction() {
  cout << "I just got executed";
}

int main() {
  myFunction();
  myFunction();
  myFunction();
  myFunction();
  myFunction();
  return 0;
}

// EXAMPLE

// function declaration
void foo();

// the main method
int main() {
  foo();
  return 0;
}

// function definition
void foo() {
  cout << "I just got executed";
}