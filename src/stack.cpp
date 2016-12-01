#include <stack.h>

void stack::push(int x) {
  CNode *node = new CNode;
  node->data = x;
  node->next = top;
  top = node;
  
  if (min == 0) {
    node = new CNode;
    node->data = x;
    node->next = min;
    min = node;
  }else {
    if (x <= min->data) {
      node = new CNode;
      node->data = x;
      node->next = min;
      min = node;
    }
  }  
}

bool stack::pop() {
  if (top != 0) {
     if (top->data == min->data) {
       CNode *node = min;
       min = min->next;
       delete node;
     }
     
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
    throw logic_error( "stack is empty" );
}

int stack::getMin() {
  if (top != 0) {
    return min->data;
  } else {
    throw logic_error( "stack is empty" );
  }
}

stack::~stack() {
  while (top != 0) {
    CNode *node = top;
    top = top->next;
    delete node;
  }
  
  while (min != 0) {
    CNode *node = min;
    min = min->next;
    delete node;
  }
}