#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;

bool hasConsecutiveNumbers(int a[], int n){
    // TODO: Your Code Here
    int min = a[0];
    bool is_cons = false;
    bool found = true;
    int counter = 0;
    for(int j = 0; j < n; j++) {
        if(a[j] < min) {
            min = a[j];
        }
    }
    //cout << "min: " << min << endl;
    int k = 0;
    while(k < n && found == true) {
        found = false;
        for(int i = 0; i < n; i++) {
            if(a[i] == min+k) {
                //cout << "true" <<endl;
                is_cons = true;
                found = true;
                counter++;
                
            }
        }

        k++;
    }
    if(counter == n) {
        return true;
    }
    else {
        return false;
    }

}

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << hasConsecutiveNumbers(a, n) << endl;
}