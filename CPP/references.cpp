#include <iostream>
#include <string>
using namespace std;

// refenrece

string food = "hasburger"; // food variable
string &meal = food; // reference to food

cout << food << endl;
cout << meal << endl;

// memory address
string drink = "Coke";
cout << &drink; // Outputs 0x6dfed4 HEX