#include <iostream>
using namespace std;

int getSumOfDigits(int N) {
    int sum_of_digits = 0;
    while(N > 0) {
        sum_of_digits = sum_of_digits + N % 10;
        N = N/10;
    }
    return sum_of_digits;
}

int main() {
    int N;
    cin >> N;
    cout << getSumOfDigits(N) << endl;
}