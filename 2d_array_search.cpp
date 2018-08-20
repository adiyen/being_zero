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
    int arr[ROWS][COLS];
    int r, c;
    cin >> r >> c;
    arr[0][0] = 1;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }

    int n = sizeof(arr)/ sizeof(arr[0]);
    int x;
    cin >> x;
    bool got_it = false;
    int k = 0;
    while(got_it == false) {
        for(int m = 0; m < c; m++) {
            if(x == arr[k][m]) {
                cout << k << " " << m << endl;
                got_it = true;
                break;
            }
        }
        k++;
    }
    if(got_it == false) cout << "-1" << endl;
    //cout << binarySearch(arr, 0, n-1, x) << endl;
}