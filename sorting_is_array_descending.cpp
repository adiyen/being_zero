#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

bool isSortedDescending(int *arr, int n){
    // TODO: Your Code Here
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