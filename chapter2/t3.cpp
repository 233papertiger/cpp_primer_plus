#include <iostream>

void func1(void);
void func2(void);
int main() {
    func1();
	func1();
	
	func2();
	func2();
	return 0;
}

void func1(void){
	std::cout << "Three blind mice" << std::endl;
}
void func2(void){
	std::cout << "See how they run" << std::endl;
}

