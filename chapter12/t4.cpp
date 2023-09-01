#include "stack.h"


int main() {
    Stack s(20);
    std::cout << "Stack is full: " << s.isfull() << std::endl;
    std::cout << "Stack is empty: " << s.isempty() << std::endl;
    
    s.push(15);
    s.push(87);
    
    Stack s2 = s;
    Item item;
    s2.pop(item);
    
    std::cout << "s2 top value: " << item << std::endl;
    s.pop(item);
    std::cout << "s stack top value: " << item << std::endl; 
    return 0;
}
