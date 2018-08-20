#include <iostream>
using namespace std;

bool find_sum(int numb[], int n, int target_sum) {
    bool done = false;
    int i = 0;
    int sum_ij;
    while(i <= n || done) {
        for(int j = i+1; j <= n; j++) {
            sum_ij = numb[i]+numb[j];
            if(sum_ij == target_sum) {
                done = true;
                break;
            }
            else if(sum_ij > target_sum) break;
        }
        i++;
    }
    return done;
}

int main() {
    int n;
    cin >> n;
    int numb[n];
    int my_numb;
    for(int i = 0; i < n; i++) {
        cin >> numb[i];
    }
    cout << "Enter your number: ";
    cout << 4 % 2 << endl;
    cin >> my_numb;
    cout << find_sum(numb, n, my_numb);
 }





