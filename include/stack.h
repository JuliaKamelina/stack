#ifndef  _STACK_H_
#define _STACK_H_

struct CNode {
  int data;
  CNode * next;
};

class stack {
  CNode *top;
 public:
  stack() {top = 0;}
  void push(int);
  bool pop();
  int & getTop();
  int getMin();
  ~stack();
};

#endif  // _STACK_H_
