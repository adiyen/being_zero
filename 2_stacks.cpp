#include <bits/stdc++.h>
#include <iostream>
using namespace std;

stack<int> s1;
stack<int> s2;
void push(int x)
{
	// Write Code using s1 and s2 only to perform push
  	s1.push(x);
}
int pop()
{
	// Write Code using s1 and s2 only to perform pop and return First-In value
    if(s2.empty()) {
        while(!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
         }
    }
    if(s2.empty()) {
        return -1;
    }
    int temp = s2.top();
    s2.pop();
    return temp;
}

int main() {
    int x;
    cin >> x;
    push(x);
}