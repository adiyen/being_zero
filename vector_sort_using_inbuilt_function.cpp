#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        vector<int> a;
        int element, querie;
        cin >> element >> querie;
        int queries[querie];
        int storage;
      	int x;
        for(int ai = 0; ai < element; ai++){
            scanf("%d", &x);
          	a.push_back(x);
        }
        for(int j = 0; j < querie; j++) {
            cin >> queries[j];
        }
        for(int i = 0; i < element; i++) {
            for(int j = 0; j < element; j++) {
                if(a[i] < a[j]) {
                    storage = a[i];
                    a[i] = a[j];
                    a[j] = storage;
                }
            }
        }
        for(int k = 0; k < querie; k++) {
            if(queries[k] > element-1) {
                cout << "-1 ";
            }
            else {
                cout << a[queries[k]] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}