#include<iostream>
using namespace std;

int getSumOfDigits(int N) {
    if(N > 0) {
        int hold = N % 10;
        return getSumOfDigits(N/10) + hold;
    }
    else {
        return 0;
    }
}

int main() {
    cout << getSumOfDigits(1234) << endl;
}