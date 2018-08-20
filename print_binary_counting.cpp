#include <bits/stdc++.h>
#include <iostream>
#include <queue>
using namespace std;

void printBinaryCounting(int n) {
        // Code the Solution
        queue<int> q;
        q.push(1);
        for(int i = 0; i < n-1; i++) {
            int f = q.front(); q.pop();
            printf("% d", f);
            q.push(f*10);
            q.push(f*10+1);
        }
        // for(int i = 0; i < n; i++) {
        //     q.push(i);
        // }
        // for(int i = 0; i < n; i++) {
        //     cout << q.front();
        //     q.pop();
        // }
}

int main() {
    int n;
    cin >> n;
    printBinaryCounting(n);
}