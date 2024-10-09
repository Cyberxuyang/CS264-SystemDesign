// 4.5 Power of Two
#include <iostream>
using namespace std;

bool isPowerOfTwo(int k) {
    if (k <= 0) return false; // Since powers of 2 can only be positive integers, negative numbers and 0 cannot be powers of 2.
    while (k % 2 == 0) {
        k /= 2;
    } // Check if k is divisible by 2. If k can be divided by 2, divide k by 2 and continue the loop until k is no longer divisible by 2
    return k == 1; // If k is eventually equal to 1, it means it is a power of 2, because a power of 2 can be reduced to 1 by continuously dividing by 2.
}

int main(){
  int k;
  // cout << "Please input an integer: ";
  cin >> k;
  if (isPowerOfTwo(k)){
    cout << "true" << endl;

  } else {
    cout << "false" << endl;
  }
}