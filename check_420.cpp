#include <iostream>
using namespace std;

bool check420(int a[], int n) {
    for(int i = 0; i < n-1; i++) {
        if(a[i]*5 == a[i+1]) {
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    scanf("%d", )
}