// 4.5 Power of Two
#include <iostream>
using namespace std;

// As long as k is an even number, you can continuously divide k by 2 until it can no longer be divided by 2. If the final result is 1, it indicates that k has been completely divisible by 2 all along, meaning that k is a power of two.
bool isPowerOfTwo(int k) {
    if (k <= 0) return false;
    while (k % 2 == 0) {
        k /= 2;
    }
    return k == 1;
}

int main(){
  int k;
  cout << "Please input an integer: ";
  cin >> k;
  if (isPowerOfTwo(k)){
    cout << "true" << endl;

  } else {
    cout << "false" << endl;
  }
}