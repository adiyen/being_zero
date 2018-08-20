#include<stdio.h>
#include<string.h>
#include <iostream>
using namespace std;

int firstUniqueCharIdx(char s[]) {
    for(int i = 0; i < strlen(s); i++) {
        for(int j = i+1; j <= strlen(s); j++) {
            if(s[j] != s[i]) {
                return i;
            }
            else {
                break;
            }
        }
    }
    return -1;
}