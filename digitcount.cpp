#include<stdio.h>
#include<math.h>
#include <iostream>
using namespace std;

int digitCount(int n) {
    int digits = 0;
    if(n > 0) {
        while(n > 0) {
            n = n/10;
            digits++;
        }
    }
    else {
        digits++;
    }
    return digits;
}

int main() {
    int n;
    cin >> n;
    cout << digitCount(n) << endl;
}