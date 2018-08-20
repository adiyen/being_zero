#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    if(n % 2 == 0) {
        for(float i = n; i >= 2; i = i/2 ) {
            if(i == 2) {
                return true;
            }
        }
        return false;
    }
  	if(n == 1) {
      return true;
    }
    else {
        return false;
    }
}

int main() {
    int n;
    cin >> n;
    cout << isPowerOfTwo(n) << endl;
}