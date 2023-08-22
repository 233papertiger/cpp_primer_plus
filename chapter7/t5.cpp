#include <iostream>

int factorial(unsigned n) {
    if ( n == 0) return 1;
    else return n * factorial(n-1);
}

int main() {
    using namespace std;
    unsigned num;
    
    cout << "Enter a number: " << endl;
    cin >> num;
    
    while ( cin.good() ) {
        cout << num << "! = " << factorial(num) << endl;
        cout << "Enter another number: " << endl;
		cin >> num;
    }
    
    return 0;
}
