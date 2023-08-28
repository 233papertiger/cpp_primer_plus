#include "List.h"

template <typename T>
List<T>::~List() {
    
}

template <typename T>
void List<T>::addItem(const T& it) {
    if ( !isFull() )
    	arr[idx++] = it;
}

template <typename T>
bool List<T>::isEmpty() const {
    return idx == 0;
}

template <typename T>
bool List<T>::isFull() const {
    return idx == List::Size;
}

template <typename T>
void List<T>::visit(void (*pf)(T & it)) {
    for ( int i=0; i<idx; ++i )
        pf(arr[i]);
}
