#include <iostream>
#include <cmath>
using namespace std;

int main () {

  // define variable
  string operation;
  double number1, number2;

  // get user input
  cout << "Enter First Number: ";
  cin >> number1;
  cout << "Enter Operation(+,-,*,/) ";
  cin >> operation;
  cout << "Enter Second Number: ";
  cin>> number2;

  // if else statement checking entered operation
  if (operation == "+") {
    cout << number1 + number2;
  } else if (operation == "+") {
    cout << number1 + number2;
  }
  else if (operation == "-") {
    cout << number1 - number2;
  } 
  else if (operation == "*") {
    cout << number1 * number2;
  }
  else if (operation == "/") {
    cout << number1 / number2;
  }
  else {
    cout << "Not a recognize operation!";
  }


    return 0;
}