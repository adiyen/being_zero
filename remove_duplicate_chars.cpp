#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int removeDupChars(char s[]) {
  	// Write your code here
  	set<char>st;
    int len = strlen(s);
    char temp[len];
    int k = 0;
  	for(int i = 0; s[i]; i++) {
      if(st.find(s[i]) == st.end()) {
          st.insert(s[i]);
          temp[k++] = s[i];

      }
    }
    temp[k] = '\0';
    strcpy(s, temp);
    return st.size();
}
