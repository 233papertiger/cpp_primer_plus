#include <iostream>
#include "cow.h"


int main() {
    Cow c1("Bull", "eat", 2220.0);
    c1.ShowCow();
    
    Cow c2("Fox", "sleep", 1890.0);
    c2.ShowCow();
    
    Cow c3 = c1;
    c3.ShowCow();
    
    c2 = c1;
    c2.ShowCow();
    return 0;
}
