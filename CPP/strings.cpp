#include <iostream>
#include <string>

// The string type is not built in but it behaves like one.
// To use it must include string library

using namespace std;

int main() {

  string greeting = "Hello";
  cout << greeting;

  // concatenation
  // + operator

  string firstName = "John";
  string lastName = "Doe";
  string fullName = firstName + " " + lastName;
  cout << fullName;

  // append()
  string yourFirstName = "Pesho";
  string yourLastName = "Peshov";
  string yourFullName = yourFirstName.append(yourLastName);
  cout << yourFullName;

  // string length
  string answer = "YESSsssssssssssssssssssssssssssssssss";
  cout << "The length of the answer string is: " << answer.size();
  cout << "The length of the answer string is: " << answer.length();

  // change string characters ( NOT IMMUTABLE )
  string test = "fail";
  test[0] = "j";
  cout << test;
  // outputs jail instead of fail :D

  // user input strings ( NOTE HERE )
  string breed;
  cout << "Type the breed of your animal: ";
  cin >> breed;
  cout << "Your animal is :" << breed;
  
  // cin considers a space ( whitespace tabs etc ) as a terminating character,
  // wich means that it can only display a single word ( even if you type many )
  string author;
  cout << "Type your full name: ";
  getline(cin, author);



  return 0;
}