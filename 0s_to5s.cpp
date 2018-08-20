#include <iostream>
using namespace std;

bool replaceZerosWithFives(int n) {

  //TODO:  Your Code Here
    int digits_amount = 0;
    while(n > 0) {
        n = n/10;
        digits_amount++;
    }
    int counter = 0;
    int digit = 0;
    int numb[digits_amount];
    for(int i = digits_amount-1; i >= 0; i--) {
        digit = n % 10;
        n = n/10;
        numb[i] = digit;
        counter++;
    }
    for(int j = 0; j < digits_amount; j++) {
        if(numb[j] == 0) {
            numb[j] = 5;
        }
    }
    for(int k = 0; k < digits_amount; k++) {
        return numb[k];
    }

}


int main()  {
    int n;
    cin >> n;
    cout << replaceZerosWithFives(n) << endl;
}