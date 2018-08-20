#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

// int findingIdx(int *arr, int n, int k){
//     // TODO: Your Code Here
//   	int low = 0;
//   	int high = n - 1;
//   	int mid;
//   	while(low <= high) {
//       mid = (low+high)/2;
//       if(k == arr[mid]) {
//         return mid;
//       }
//       else if(k < arr[mid]) {
//         high = mid-1;
//         //mid = (low+high)/2;
//       }
//       else {
//         low = mid+1;
//         //mid = (low+high)/2;
//       }
//     }
//     return -1;
// }

//recursive

// int bs(int a[], int low, int high, int k) {
//     if(high < low) {
//         return -1;
//         int mid = (low+high)/2;
//         if(k == a[mid]) return mid;
//         if(k < a[mid]) {
//             return bs(a, low, mid-1, k);
//         }
//         else {
//             return bs(a, mid+1, high, k);    
//         }
//     }
// }


void findingIdx(int **numb, int n1, int n2) {
    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < n2; j++) {
            cin >> numb[i][j];
        }
    }
}

int main() {
    int n1;
    int n2;
    cin >> n1 >> n2;
    int numb[n1][n2];
    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < n2; j++) {
            cin >> numb[i][j];
        }
    }
    findingIdx(numb, n1, n2)
}