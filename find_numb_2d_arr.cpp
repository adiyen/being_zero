#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

#define ROWS    100
#define COLS    100

//void findNumberInSortedGrid(int arr[ROWS][COLS], int r, int c, int key){
   // Print i j if key is found
   // -1 otherwise
   // Give a newLine after printing the answer
int binarySearch(int arr[], int low, int high, int x) {
   if (high >= low) {
        int mid = low + (high - low)/2;
        if (arr[mid] == x) return mid;
        if (arr[mid] > x) return binarySearch(arr, low, mid-1, x);
        else return binarySearch(arr, mid+1, high, x);
   }
    return -1;
}
 
int main(void) {
   int arr[] = {2, 3, 4, 10, 40};
   int n = sizeof(arr)/ sizeof(arr[0]);
   int x;
   cin >> x;
   cout << binarySearch(arr, 0, n-1, x) << endl;
   return 0;
}
