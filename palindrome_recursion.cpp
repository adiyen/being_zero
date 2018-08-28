#include <iostream>
using namespace std;

bool isPalindromic2(int a[], int i, int j){
    if(j <= i) return true;
    if(a[i] != a[j]) return false;
    else {
        return isPalindromic2(a, i+1, j-1);
    }
}

bool isPalindromic(int a[], int n){
    return isPalindromic2(a, 0, n-1);
}

int main() {
    int n = 5;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << isPalindromic(a, n) << endl;
}