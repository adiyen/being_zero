#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool areAnagrams(char first[], char second[]) {
    bool same = true;
    if(strlen(first) == strlen(second)) {
        for(int i = 0; i < strlen(first); i++) {
            same = true;
            for(int j = i; j < strlen(first); j++) {
                if(first[i] != second[j]) {
                    same = false;
                }
                else {
                    same = true;
                    second[j] = ' ';
                    break;
                }
            }
            if(same == false) return false;
        }
        return true;
    }
    else {
        return false;
    }
}

int main() {
    char first[] = {"ORIGINAL"};
    char second[] = {"REGIONAL"};
    cout << areAnagrams(first, second) << endl;

}