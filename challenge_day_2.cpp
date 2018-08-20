#include <iostream>
using namespace std;

int replacezeroswithfives(int n) {
    cout << "n: " << n << endl;
    if(n < 10)  {
        return n;
    }
    else {
        return replacezeroswithfives(n/10)+(n%10 == 0?5: n%10);
    }
}

int main() {
    int n;
    cin >> n;
    cout << replacezeroswithfives(n) << endl;
}