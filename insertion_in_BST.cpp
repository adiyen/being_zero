#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
struct BSTNode{
    int data;
    BSTNode *left, *right;
};

BSTNode *createBSTNode(int d){
    BSTNode *bt = (BSTNode*)malloc(sizeof(BSTNode));
    bt->left = bt->right = NULL;
    bt->data = d;
    return bt;
}

BSTNode *insertBSTNode(BSTNode *root, int d)
{
    BSTNode* newnode = createBSTNode(d);
	if(root == NULL) {
      return newnode;
    }
  	BSTNode* temp = root;
  	while(true) {
        if(d < temp->data) {
            if(temp->left == NULL) {
                temp->left = newnode;
                break;
            }
            temp = temp->left;
        }
        else {
            if(d < temp->data) {
                if(temp->right == NULL) {
                    temp->right = newnode;
                    break;
                }
                temp = temp->right;
            }
        }
    }
    return root;
}