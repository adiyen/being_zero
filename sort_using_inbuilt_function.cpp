#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int element, querie;
        cin >> element >> querie;
        int elements[element], queries[querie];
        int storage;
        for(int i = 0; i < element; i++) {
            cin >> elements[i];
        }
        for(int j = 0; j < querie; j++) {
            cin >> queries[j];
        }
        for(int i = 0; i < element; i++) {
            for(int j = 0; j < element; j++) {
                if(elements[i] < elements[j]) {
                    storage = elements[i];
                    elements[i] = elements[j];
                    elements[j] = storage;
                }
            }
        }
        for(int k = 0; k < querie; k++) {
            if(queries[k] > element-1) {
                cout << "-1 ";
            }
            else {
                cout << elements[queries[k]] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}