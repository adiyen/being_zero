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

LLNode *insertInBeginning(LLNode *h, int x){
  // Your Code goes here...
  LLNode* newnode = createNode(x);
  if(h == NULL) {
      return newnode;
  }
  else {
      newnode->next = h;
      return newnode;
  }
  return h;
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
      	while(n--){
      		scanf("%d", &x);
      		h = insertInBeginning(h, x);
    	}
      	printList(h);
    }
  	return 0;
}