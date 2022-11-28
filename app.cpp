// first app on C language

#include <iostream>
using namespace std;

int main() {
  double numOne, numTwo, result;
  char operation;

  cout << "Please Input First Number: "; 
  cin >> numOne;
  cout << "Please Input Second Number: "; 
  cin >> numTwo;
  cout << "Please Input Sign Operation [+ - * /]: "; 
  cin >> operation;

  switch (operation) {
    case '+':
        cout << numOne << " + " << numTwo << " = " << numOne + numTwo;
        break;
    case '-':
        cout << numOne << " - " << numTwo << " = " << numOne - numTwo;
        break;
    case '*':
        cout << numOne << " * " << numTwo << " = " << numOne * numTwo;
        break;
    case '/':
        cout << numOne << " / " << numTwo << " = " << numOne / numTwo;
        break;
    default:
        cout << "Error! The Operator is NOT Correct";
        break;
  }


  return 0;
}