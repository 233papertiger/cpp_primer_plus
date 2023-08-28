#include "Stack.h"

Item Stack::pop() {
    if ( top > 0 )
        return items[--top];
    else 
        return {};
}

bool Stack::push(const Item &i) {
    if ( top >= Size )
        return false;
    else {
        items[top++] = i;
        return true;
    }
}

Stack::~Stack() {
}
