#include <iostream>
#include <string>
#include <map>
#define MAX_SIZE 1000
using namespace std;

char mostFrequentCharacter(char s[]) {
  map<char, int> mp;
  int max_count = 0;
  char answer;

  for(int i = 0; i < strlen(s); i++) {
    mp[s[i]]+= 1;
    //break;
  }

  map<char, int>::iterator it;
  char key;
  int value;
  // for (it = mp.begin(); it != mp.end(); it++)
  // {
  //   key = (*it).first;
  //   value = (*it).second;
  //     if(value > max_count) {
  //       max_count = value;
  //       answer = key;
  //     }    
  // }

  return answer;
}

int main() {
  cout << mostFrequentCharacter("amazingpeoplearethereintheworld") << endl;
  return 0;
}
