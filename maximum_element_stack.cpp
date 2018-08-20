#include <bits/stdc++.h>

using namespace std;

stack<int> st;
stack<int> maxst;

int main(){
    // TODO: Your Code Here
// read input from STDIN and print output to STDOUT
    int n;
    scanf("%d", &n);
    while(n--) {
        int oper, x;
        scanf("%d", oper);
        switch(oper) {
            case 1:
                scanf("%d", &x);
                break;
            case 2:
                st.pop();
                break;
            case 3:
                st.top();
                break;
        }
    }
}