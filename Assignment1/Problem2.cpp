// 4.2 Greatest Common Divisor
#include <iostream>
using namespace std;


int calculateGcd(int num1, int num2){
  // define the current greatest common divisor as 1.
  int gcd = 1;
  // find the smaller number between the two input integers.
  int min = (num1 < num2) ? num1 : num2;

  // Start decreasing from the smaller number to find the greatest common divisor.
  for (int i=min; i >=1; i--){
    // If 'i' can divide both num1 and num2 evenly, then it is the greatest common divisor.
    if (num1 % i == 0 && num2 % i == 0){
      gcd = i;
      break;
    }
  }
  return gcd;
}

int main() {
  int fisrtInput;
  int secondInput;
  cout << "Please input the first integer: ";
  cin >> fisrtInput;
  cout << "Please input the second integer: ";
  cin >> secondInput;
  int output = calculateGcd(fisrtInput, secondInput);
  cout << "The greatest common divisor of two integers is: " << output << endl;
}