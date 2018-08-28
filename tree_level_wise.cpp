#include <iostream>
#include <queue>
using namespace std;

struct BSTNode{
    int data;
    BSTNode *left, *right;
};

void printLevelWiseOnLines(BSTNode *root) {
    // TODO:  Fill your code here
    if(!root) {
        return;
    }
    queue<BSTNode*> q;
    q.push(root);
    
    while(!q.empty()) {
        int qs = q.size();
        while(qs > 0) {
            BSTNode* f = q.front(); q.pop();
            cout << f->data << " ";
            if(f->left) {
                q.push(f->left);
            }
            if(f->right) {
                q.push(f->right);
            }
            qs--;
        }
        cout << endl;
    }
}