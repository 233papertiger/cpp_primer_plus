#include <iostream>


double calculate(double x, double y, double (*func)(double, double));
double add(double x, double y);
double sub(double x, double y);


double mul(double x, double y);
double div(double x, double y);


int main() {
    using namespace std;
    int leftValue, rightValue;
    
    cout << "Enter left value and right value: ";
    while ( cin >> leftValue >> rightValue ) {
        cout << "add result = " 
            << calculate(leftValue, rightValue, add) << endl;
        
        cout << "sub result = " 
            << calculate(leftValue, rightValue, sub) << endl;
        cout << "mul result = " 
            << calculate(leftValue, rightValue, mul) << endl;
        cout << "div result = " 
            << calculate(leftValue, rightValue, div) << endl;
        cout << "Enter next left value and right value: ";
    }
    return 0;
}

double calculate(double x, double y, double (*func)(double, double)) {
    return func(x, y);
}
    
double add(double x, double y) {
	return x + y;
}

double sub(double x, double y) {
    return x - y;
}

double mul(double x, double y) {
    return x * y;
}

double div(double x, double y) {
    if ( y != 0 ) return x / y;
	return 0;
}
