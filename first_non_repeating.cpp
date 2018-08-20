#include <iostream>
using namespace std;

int firstNonRepeatingElement(int a[], int n){
    // TODO: Your Code Here
    bool dup;
    for(int i = 0; i < n; i++) {
        dup = false;
        for(int j = 0; j < n; j++) {
            if (i == j) continue;
            if(a[i] == a[j]) {
                dup = true;
                continue;
            }
        }
        if(!dup) return a[i];
    }

}

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << firstNonRepeatingElement(a, n);
}