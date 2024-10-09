// 4.1 Reverse an integer
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int reverseInteger(int num){
  // Check the input num is positive or negative
  bool isNegative = num < 0;

  // Convert the number to a string after taking its absolute value
  string numStr = to_string(abs(num));

  // reverse the numStr
  reverse(numStr.begin(), numStr.end());

  // Convert the numStr back to num
  int reversedNum = stoi(numStr);

  // If the original num is negative, add '-'
  if (isNegative) {
    reversedNum = - reversedNum;
  }

  return reversedNum;
}

int main() {
  int input;
  // cout << "Please input an integer:";
  cin >> input;

  int output = reverseInteger(input);
  // cout << "The reversed integer is: " << output << endl;
  cout << output << endl;
}
