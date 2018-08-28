#include <iostream>
#include <string>
#include <map>
#define MAX_SIZE 1000
using namespace std;

char mostFrequentCharacter(char s[]) {
  map<char, int> mp;
  int max_count = 0;
  char answer;
  int counter = 0;
  char numb[strlen(s)];

  for(int i = 0; i < strlen(s); i++) {
    mp[s[i]]+= 1;
  }

  map<char, int>::iterator it;
  char key;
  int value;
  for (it = mp.begin(); it != mp.end(); it++) {
    key = it->first;
    value = it->second;
      if(value > max_count) {
        max_count = value;
        //answer = key;
        //cout << answer << endl;
        answer = numb[counter];
        counter++;
      }    
      if(value == max_count) {
        //answer = key;
        answer = numb[counter];
        //cout << answer << endl;
      }
  // }
  // for(it = mp.begin(); it != mp.end(); it++) {
  //   //cout << it->first << " val: "<< it->second << endl;
  //   if(it->)
  // }
  }
  char starter = s[numb[0]];
  char first_most;
  cout << "starter: " << starter;
  cout << numb[0];
  for(int i = 1; i <= strlen(numb); i++) {
    if(s[numb[i]] < starter) {
      first_most = s[numb[i]];
      starter = s[numb[i]];
    }
  }
  cout << "first most: " << first_most << endl;
  return answer;
}

int main() {
  cout << mostFrequentCharacter("lllllkkkkkdddddmmmmm") << endl;
  return 0;
}
