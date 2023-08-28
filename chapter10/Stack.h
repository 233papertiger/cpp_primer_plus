// Stack.h
#ifndef STACK_H_
#define STACK_H_

struct customer {
    char fullname[35];
    double payment;
};

typedef customer Item;

class Stack{
    public:
    	static const int Size = 100;
    private:
    	int top;
    	Item items[Size];
    public:
    	Stack() { top = 0;};
    	bool push(const Item &i);
    	Item pop();
    	~Stack();
};

#endif
