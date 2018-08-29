#include <iostream>
using namespace std;

void sorter(int start_vals[], int end_vals[], int n) {
    int storage_start, storage_end;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(start_vals[i] < start_vals[j]) {
                storage_start = start_vals[i];
                storage_end = end_vals[i];
                start_vals[i] = start_vals[j];
                end_vals[i] = end_vals[j];
                start_vals[j] = storage_start;
                end_vals[j] = storage_end;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        cout << "(" << start_vals[i] << ", " << end_vals[i] << ")" << " ";
    }
}

int main() {
    int n1;
    cin >> n1;
    int n;
    cin >> n;
    int start[n], end[n];
    for(int i = 0; i < n; i++) {
        cin >> start[i] >> end[i];
    }
    sorter(start, end, n);
    return 0;
}