#include <stack.h>

void stack::push(int x) {
  CNode *node = new CNode;
  node->data = x;
  node->next = top;
  top = node;
}

bool stack::pop() {
  if (top != 0) {
     CNode *node = top;
     top = top->next;
     delete node;
     return true;
  } else {
     return false;
  }
}

int & stack::getTop() {
  if (top != 0)
    return top->data;
  else
    throw "Stack_is_empty";
}

int stack::getMin() {
  if (top != 0) {
    CNode *new_top = top;
    int min = new_top->data;
    while (new_top != 0) {
      if (new_top->data < min)
        min = new_top->data;
      new_top = new_top->next;
    }
    return min;
  } else {
    throw "Stack_is_empty";
  }
}

stack::~stack() {
  while (top != 0) {
    CNode *node = top;
    top = top->next;
    delete node;
  }
}