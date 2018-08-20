#include<stdio.h>
#include<iostream>
using namespace std;
void printStarTriangle(int r, int c)
{
  for(int i = 1; i <= r; i++) {
    for(int j = 1; j <= c; j++) {
      cout << i;
    }
    cout << endl;
  }

}