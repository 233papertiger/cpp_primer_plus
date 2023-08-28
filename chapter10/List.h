// List.h
#ifndef LIST_H_
#define LIST_H_

template<typename T>
class List {
    public:
    	static const int Size = 10;
	
    private:
    	T arr[Size];
    	int idx;
    
    public:
    	List();
    	~List();
    	void addItem(const T &);
    	bool isEmpty() const;
    	bool isFull() const;
    	void visit(void (*pf)(T &));
};

template <typename T>
List<T>::List() {
	idx = 0;
}

template <typename T>
List<T>::~List() {
}

template <typename T>
void List<T>::addItem(const T& it) {
    if ( !isFull() )
    	arr[idx++] = it;
}

template<typename T>
bool List<T>::isEmpty() const {
    return idx == 0;
}

template<typename T>
bool List<T>::isFull() const {
    return idx == List::Size;
}

template <typename T>
void List<T>::visit(void (*pf)(T & it)) {
    for ( int i=0; i<idx; ++i )
        pf(arr[i]);
}
#endif
