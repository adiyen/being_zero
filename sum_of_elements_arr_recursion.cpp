#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

int worker(int a[], int holder, int n) {
  if(holder <= n-1) {
    return worker(a, holder+1, n) + a[holder]; 
  }
  else {
  	return 0;
  }
}

int sumArrayElements(int a[], int n){
    // TODO: Your Code Here
  return worker(a, 0, n);
}

int main() {
    int n = 4;
    int a[n];
    a[0] = 4, a[1] = 6, a[2] = 19, a[3] = 17; 
    cout << sumArrayElements(a, n) << endl;
}