#include <stack.h>
#include <iostream>

int main() {
  stack a;
  a.push(5);
  a.push(6);
  a.push(7);
  std::cout << a.getMin() << std::endl;
  std::cout << a.getTop() << std::endl;
  std::cout << a.pop() << std::endl;
  std::cout << a.pop() << std::endl;
  std::cout << a.pop() << std::endl;
}