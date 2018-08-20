#include <iostream>
using namespace std;
int sumEvenNumbersFromOneToN(int n)
{   
    int count = 1;
      for(int i = 1; i <= n; i++) {
        if(i % 4 == 0) {
          	cout << "";
            count-=1;
            n++;
        }
        else if(count % 2 == 0) {
            cout << "-" << i << " ";
        }

        else {
            cout << i << " ";
        }
        count++;
    }
}