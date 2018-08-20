#include <iostream>
using namespace std;

int getIdxOfSecondLargest(int a[], int n) {

    int second_largest;
    int largest;
    int holder;
    if(a[0] > a[1]) {
        largest = a[0];
        second_largest = a[1];
    }
    else {
        largest = a[1];
        second_largest = a[0];
    }
    for(int j = 2; j < n; j++) {
        if(a[j] > largest) {

            second_largest = largest;
            largest = a[j];
            holder = j-1;
        }
        else if(a[j] > second_largest && a[j] != largest) {
            second_largest = a[j];
            holder = j;
        }   
    }
    for(int i = 0; i < n; i++) {
        if(a[i] == second_largest) {
            holder = i;
        }
    }
    return holder;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << getIdxOfSecondLargest(a, n);
}