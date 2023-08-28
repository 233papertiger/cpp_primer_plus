// usemove.cpp
#include "Move.h"
#include <iostream>

int main() {
    Move m1(3.0, 2.0);
    Move m2(4.2, -1.5);
    
    Move cur = m1.add(m2);
    std::cout << "Cur status: \n";
    cur.showmove();
    
    std::cout << "After reset, cur status: \n";
    cur.reset();
    cur.showmove();
    
    std::cout << "m1 status: \n";
    m1.showmove();
    return 0;
}
