#include <iostream>
#include <string>
using namespace std;

void sorter(int holder[], int n, string key) {
    int storage = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(holder[i] < holder[j]) {
                storage = holder[i];
                holder[i] = holder[j];
                holder[j] = storage;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        cout << key[holder[i]];
    }
}

int main() {
    string key;
    cin >> key;
    string str;
    cin >> str;
    char storage;
    int holder[str.length()];
    for(int i = 0; i < str.length(); i++) {
        for(int j = 0; j < key.length(); j++) {
            if(key[j] == str[i]) {
                holder[i] = j;
            }
        }
    }
    sorter(holder, str.length(), key);
    return 0;
}