#include <iostream>
using namespace std;

int printFibSeries(long n) {
    long numb[n];
    numb[0] = 0;
    numb[1] = 1;
    for(int i = 2; i < n; i++) {
      numb[i] = numb[i-1] + numb[i-2];
	}
    for(int i = 0; i < n; i++) {
      cout << numb[i] << " ";
	}

}

int main() {
    long n;
    cin >> n;
    printFibSeries(n);
}