#include <bits/stdc++.h>
#include <iostream>

using namespace std;

bool areThreeFoolsIn(int a[], int n){
    // TODO: Your Code Here
    int min = a[0];
    int holder = 0;
    bool running = true;
    int storage = n;
    bool answer = true;
    for(int i = 0; i < n; i++) {
        if(a[i] < min) {
            min = a[i];
        }
    }
    while(running == true && min <= storage) {
        for(int j = 0; j < n; j++) {
            if(a[j] == min) {
                holder = j;
            }
        }
        if(a[holder] != min) {
            return false;
        }
        else {
            min++;
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
    areThreeFoolsIn(a, n);
}