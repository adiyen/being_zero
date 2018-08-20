#include <iostream>
using namespace std;

int nth_val_fib(int n) {
    int numb[n];
    numb[0] = 1;
    numb[1] = 1;
    for(int i = 2; i < n; i++) {
      numb[i] = numb[i-1] + numb[i-2];
      if(numb[i] == n) {
          return i;
      }
	}
    return -1;
}

int main() {
    int n;
    cin >> n;
    cout << nth_val_fib(n) << endl;
}