#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;

bool isPalindromic(int a[], int n){
    bool is_palindrome = true;
    for(int i = 0; i < n; i++) {
        if(a[i] != a[n-i-1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << isPalindromic(a, n) << endl;
}