// 4.3 Palindrome Number
#include <iostream>
using namespace std;

bool isPalindrome(int x){
  // If input num less than 0, it must not a palindrome number
  if (x<0){
    return false;
  }

  // Reverse the integer
  int before = x;
  int after = 0;
  while (x != 0) {
    int lastDigit = x % 10; // Get the last digit
    // Appends the last digit of 'x' to 'after'. It builds the reversed number step by step. For example, if 'after' is 12 and 'lastDigit' is 3, the result will be 123.
    after = after * 10 + lastDigit; 
    // Removes the last digit from 'x' by performing integer division. This helps in iterating through the digits of the number from right to left.
    x = x / 10; 
  }

  return before == after;
}

int main(){
  int num;
  cout << "Please input an integer: ";
  cin >> num;

  if (isPalindrome(num)){
    cout << "true" << endl;
  } else{
    cout << "false" << endl;
  }

  return 0;
}