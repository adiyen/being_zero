#include <iostream>
using namespace std;

bool isValidNumber(int n, int digits_amount) {

  //TODO:  Your Code Here
    int counter = 0;
    int digit = 0;
    int numb[digits_amount];
    for(int i = digits_amount-1; i >= 0; i--) {
        digit = n % 10;
        n = n/10;
        //cout << "digit: " << digit << endl;
        numb[i] = digit;
        counter++;
    }
    for(int j = 0; j < digits_amount; j++) {
        cout << numb[j] << endl;
    }

}

int numbofdigits(int n) {
   int digits = 0;
   int numb = n;
    while(n > 0) {
        n = n/10;
        digits++;
    }
    isValidNumber(numb, digits);

}

int main()  {
    int n;
    cin >> n;
    numbofdigits(n);
}
