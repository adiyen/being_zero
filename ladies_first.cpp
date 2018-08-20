#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>

using namespace std;

void ladiesFirst(char *str) {
  	bool swapped;
  	char storage;
    int i = strlen(str)-1;
    int j = strlen(str);
	while(i > 0) {
      swapped = false;
        while(str[i] == 'L' && str[i-1] == 'G') {
          storage = str[i-1];
          str[i-1] = str[i];
          str[i] = storage; 
        }
        i--;
      }
      for(int i = 0; i < strlen(str); i++) {
          cout << str[i];
      }
}

int main() {
    char str[] = "LGGGGGGLLGGGGLL";
    ladiesFirst(str);
}