#include <iostream>
#include "Stack.h"


int main() {
    customer c1 = {"Alan Walker", 10000.0};
    customer c2 = {"Tailor Swift", 5000.0};
    customer c3 = {"Zai Zai", 6000.0};
    
    Stack s;
    s.push(c1);
    s.push(c2);
    
    s.push(c3);
    Item it1 = s.pop();
    Item it2 = s.pop();
    
    Item it3 = s.pop();
    Item it4 = s.pop();
    
    std::cout << "fullname: " << it3.fullname
        << ", payment: " << it3.payment << std::endl;
    return 0;
}
