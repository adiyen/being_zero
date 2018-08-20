#include <iostream>
#include <vector>
using namespace std;

void printCommaSeparated(vector<int> a) {
    for(int i = 0)
}

int main()
{
	int t; scanf("%d", &t);
  	while(t--){
      int n; scanf("%d", &n);
      vector<int> a;
      int x;
      for(int i=0;i<n;i++){
        scanf("%d", &x);
        a.push_back(x);
      }
      printCommaSeparated(a);
      printf("\n");
    }
	return 0;
}