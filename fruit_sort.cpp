#include <iostream>
#include <vector>
#include <string>
using namespace std;

void arrangeLengthWise(vector<string> &v, int n){
    string min = v[0];
    string storage;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(v[i].length() < v[j].length()) {
                storage = v[i];
                v[i] = v[j];
                v[j] = storage;
            } 
            else if(v[i].length() == v[j].length()) {
                if(v[i][0] == v[j][0] && v[i][1] < v[j][1]) {
                    storage = v[j];
                    v[j] = v[i];
                    v[i] = storage;
                }
                else if(v[i][0] < v[j][0]) {
                    storage = v[i];
                    v[i] = v[j];
                    v[j] = storage;
                }
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    string s;
    vector<string> v;
    for(int i=0; i<n; i++){
        cin >> s;
        v.push_back(s);
    }

    arrangeLengthWise(v, n);

    for(vector<string>::iterator i = v.begin(); i != v.end(); ++i){
        cout<<*i<<" ";
    }

    return 0;
}