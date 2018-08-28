#include <iostream>
using namespace std;

int worker(int N, int counter) {
	if(counter <= N) {
      return worker(N, counter+1), counter;
    }
	return 0;
}

int printOneToN(int N)
{
  	// Your Code Here
	return worker(N, 1);
}

int main() {
    int N = 8;
    cout << printOneToN(N);
}