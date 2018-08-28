#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

bool descending_sorting(int arr[], int n) {
    bool sorted = false;
    for(int i = 0; i < n-1; i++) {
        if(arr[i] >= arr[i+1]) {
            sorted = true;
        }
        else {
            return false;
        }
    }
  return true;
}

bool ascending_sorting(int arr[], int n) {
    bool sorted = false;
    for(int i = 0; i < n-1; i++) {
        if(arr[i] <= arr[i+1]) {
            sorted = true;
        }
        else {
            return false;
        }
    }
  return true;
}

bool isSorted(int arr[], int n){
    // bool sorted = false;
    for(int i = 0; i < n-1; i++) {
        if(arr[i] > arr[i+1]) {
            return descending_sorting(arr, n);
        }
        else if(arr[i] < arr[i+1]) {
            return ascending_sorting(arr, n);
        }
    }
    return true;
}

int main() {
    int n = 5;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << isSorted(arr, n) << endl;
}