#include <iostream>
#include <string>
#define MAX_SIZE 1000
using namespace std;

// void choosyPrint(string s) {
//   //TODO:  Your Code Here
//   char c;
//   int lowercase_vowels = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
//   int uppercase_vowels = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
//   for(int i = 0; i < s.length(); i++) {
//       if(s[i]) {
//           cout << "$";
//       }
//       else {
//           cout << s[i];
//       }
//     }
// }

bool is_vowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    char c;
    cin >> c;
    cout << is_vowel(c) << endl;
}