#include <iostream>
using namespace std;

void myFunction(string country = "Bulgaria") {
  cout << country << "\n";
}

int main() {
  myFunction("Belgium");
  myFunction("Brazil");
  myFunction();
  return 0;
}