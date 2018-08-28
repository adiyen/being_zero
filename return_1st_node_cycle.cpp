#include <iostream>
using namespace std;
struct LLNode{
  int data;
  struct LLNode *next;
};

LLNode *beginningOfCycle(LLNode *h)
{
    // Your Code Here
  if(!h) {
    return NULL;
  }
  LLNode *s=h, *f=h;
  while(f && f->next) {
    s=s->next;
    f=f->next->next;
   	if(s == f) {
      s = h;
      
    }
  }
  return NULL;
}