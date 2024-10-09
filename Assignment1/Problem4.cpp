// 4.4 Power Function
#include <iostream>
using namespace std;


// Exponentiation by squaring involves halving the exponent and squaring the base in each step, which reduces the size of the problem (the exponent) continually. This approach quickly reaches the result, and the time complexity is also O(log n).
double pow(double base, int exponent){
  // Special case handling
  if (base == 0 && exponent <= 0) {
        throw invalid_argument("0 cannot be raised to a non-positive power");
    }
  // If exponent is 0, then the result must be 1.
  if (exponent == 0){
    return 1;
  } else if (exponent < 0)
  {
    // When the exponent is negative, it means you are calculating the reciprocal of the base.
    base = 1 / base;
    exponent = -exponent;
  }
  
  double currentBase = base;
  double result = 1;

  // Exponentiation by Squaring - An optimization method similar to binary search
  // This loop runs O(log n) times, where n is the exponent.
  while (exponent > 0){
    if (exponent % 2 == 1){ // exponent is odd
     result *= currentBase;
    } 
    currentBase *= currentBase;
    // each iteration of the while loop, the exponent is divided by 2. This reduces the problem size by half at every step.
    exponent /= 2;
  }

  return result;

}

int main(){
  double base; 
  int exponent;
  // cout << "Please input the base: ";
  cin >> base;
  // cout << "Please input the exponent: ";
  cin >> exponent;

  // cout << " The result is: " << pow(base, exponent) << endl;
  cout << pow(base, exponent) << endl;

  return 0;
}