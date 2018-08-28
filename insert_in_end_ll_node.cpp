#include <iostream>

using namespace std;
struct LLNode{
  int data;
  struct LLNode *next;
};

LLNode *createNode(int d){
  LLNode *t = (LLNode*)malloc(sizeof(LLNode));
  t->next=NULL;
  t->data=d;
  return t;
}

LLNode *last; // REMEMBERING LAST CAN HELP

LLNode *InsertAtEnd(LLNode *h, int x){
  // Your Code goes here...
  // Note:  Keep updating last - It'll help us make insertion O1()
  LLNode* newnode = createNode(x);
  if(h == NULL) {
      return newnode;
  }
  else {
    LLNode* temp = h;
    while(temp != NULL) {
        temp = temp->next;
    }
    temp->next == newnode;
    return h;
  }
}
void printList(LLNode *h){
  while(h){
    printf("%d ", h->data);
    h = h->next;
  }
  printf("\n");
}
int main()
{
  	int n, t, x;
  	scanf("%d", &t);
  	while(t--)
    {
      	scanf("%d", &n);
        LLNode *h = NULL;
      	last = NULL;
      	while(n--){
      		scanf("%d", &x);
      		h = InsertAtEnd(h, x);
    	}
      	printList(h);
    }
  	return 0;
}