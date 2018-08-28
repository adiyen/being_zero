#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <queue>

using namespace std;
struct BSTNode{
    int data;
    BSTNode *left, *right;
};

void levelOrder(BSTNode *root) {
    // TODO:  Fill your code here
    if(root == NULL) {
        return;
    }
    queue<BSTNode*> q;
    q.push(root);
    while(!q.empty()) {
        BSTNode* f = q.front(); q.pop();
        cout << f->data;
        if(f->left != NULL) {
            q.push(f->left);
        }
        if(f->right != NULL) {
            q.push(f->right);
        }
    }
}