#ifndef  _STACK_H_
#define _STACK_H_

#include <stdexcept>
using namespace std;

struct CNode {
  int data;
  CNode * next;
};

class stack {
  CNode *top;
  CNode *min;
 public:
  stack() {
    top = 0;
    min = 0;
  }
  void push(int);
  bool pop();
  int & getTop();
  int getMin();
  ~stack();
};

#endif  // _STACK_H_
