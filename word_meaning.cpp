#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
    int n;
    scanf("%d", &n);
    string word, meaning;
    map<string, string>mp;
    while(n--) {
        cin >> word >> meaning;
        mp[word] = meaning;
    }
    cout << mp.size() << endl;
    map<string, string>::iterator it;
    for(it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }
    int q;
    cin >> q;
    while(q--) {
        cin >> word;
        cout << mp[word] << endl;
    }
    return 0;
}