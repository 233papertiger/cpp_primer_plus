#include "List.h"
#include <iostream>

template<typename T>
void linearIncreatment(T & it) {
    std::cout << it << " ";
}

int main() {
    List<double> sales;
    sales.addItem(3.0);
    sales.addItem(4.0);
    
    std::cout << "sales is full: " << sales.isFull() << std::endl;
    std::cout << "sales is empty: " << sales.isEmpty() << std::endl;
    sales.visit(linearIncreatment);

	std::cout << std::endl;
	return 0;
}
