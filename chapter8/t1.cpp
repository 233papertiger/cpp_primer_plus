#include <iostream>


const int ArSize = 100;
void ShowString(const char *str, int n = 1);
int main() {
    using namespace std;
    char str[ArSize];
	cout << "Enter a string:";

	cin.getline(str, ArSize);
	ShowString(str, 2);
    return 0;
}


void ShowString(const char *str, int n) {
    for ( int i = 0; i < n; ++i )
        std::cout << str << std::endl;
}
