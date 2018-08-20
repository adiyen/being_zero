#include <bits/stdc++.h>

#define MAX_SIZE 1000
#include <iostream>
using namespace std;

bool hasUniqueChars(char s[]) {
  //TODO:  Your Code Here
	set<char>st;
  	for(int i = 0; s[i]; i++) {
      st.insert(s[i]);
    }
  	return strlen(s) == st.size();
}

int main() {
    char s[10];
    for(int i = 0; i < 5; i++) {
        cin >> s[i];
    }
    cout << hasUniqueChars(s) << endl;
}