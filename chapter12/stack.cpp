#include "stack.h"

Stack::Stack(int n) {
    size = n;
    top = 0;
    pitems = new Item[size];
}

Stack::Stack(const Stack & st) {
    size = st.size;
    pitems = new Item[size];
    top = st.top;
    
    for ( int i=0; i<top; ++i )
        pitems[i] = st.pitems[i];
    
}

Stack::~Stack() {
    delete[] pitems;
}

bool Stack::isempty() const {
    return top == 0;
}

bool Stack::isfull() const {
    return top == size;
}

bool Stack::push(const Item & item) {
    if ( top == size ) return false;
    else {
        pitems[top++] = item;
        return true;
    }
}

bool Stack::pop(Item & item) {
    if ( top == 0 ) return false;
    else {
        item = pitems[--top];
        return true;
    }
}

Stack & Stack::operator=(const Stack & st) {
    if ( this == &st ) return *this;
    else {
        delete[] pitems;
        pitems = new Item[size];
        for ( int i=0; i<st.top; ++i ) {
            pitems[i] = st.pitems[i];
        }
        return *this;
    }
}

