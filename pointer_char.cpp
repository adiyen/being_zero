#include <iostream>
using namespace std;

int main() {
    string c = "abcdefg";
    //char c1;
    string *ptr;
    ptr = &c;
    //c1 = c;
    //ptr = &c1;
    // cout << c  << " " << c1 << " " << *ptr << endl;
    cout << c << " " << ptr << endl;
}