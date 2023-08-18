#include <iostream>
#include <array>
using namespace std;
const int ArSize = 16;


int main() {
    array<long double, 101> factorials;
    factorials[1] = factorials[0] = 1L;
    for ( int i=2; i<101; ++i ) {
        factorials[i] = i * factorials[i-1];
    }
    cout << "100! = " << factorials[100] << endl;
    return 0;
}
