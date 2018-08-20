#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
    // int n;
    // cin >> n;
    // int count;
    // int counter = 0;
    // int index[count];
    // string my_word[count];
    // string a[n];
    // for(int j = 0; j < n*2; j++) {
    //     cin >> a[j];
    // }
    // cin >> count;
    // for(int i = 0; i < count; i++) {
    //     cin >> my_word[i];
    // }
    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j < n*2; j++) {
    //         if(my_word[j] == a[i]) {
    //             index[j] = i;
    //             cout << "index[j]: " << index[j] << endl;
    //             counter++;
    //             break;
    //         }
    //     }

    // }
    // cout << "words: " << endl;
    // for(int m = 0; m < counter; m++) {
    //     if(index[m] % 2 == 0){
    //         cout << a[m] << endl;
    //     }
    // }
    map<string, string>mp;
    int n; 
    cin >> n;
    int input;
    string word;
    string meaning;
    // for(int i = 0; i < n; i++) {
    //     cin >> word;
    //     cin >> meaning;
    //     mp[word] = meaning;
    // }
    for(int i = 0; i < n; i++) {
       mp[i] = i+1;
    }
    cin >> input;
    for(int j = 0; j < n; j++) {
        if(mp[j] == input) {
            cout << mp[j];
        }
    }

    // //cout << mp[word];
  	// return 0;
}