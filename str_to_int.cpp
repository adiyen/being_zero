#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

// void str_to_int(char s[]) {
//     int number = atoi(s);
//     cout << number << endl; 
// }

void str_to_int(string s) {
    int number = stoi(s);
    cout << int(number) << endl; 
}

int main() {
    string s;
    cin >> s;
    int number = stoi("56");
    cout << int(number) << endl;
    //str_to_int(s);
}