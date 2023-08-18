#include <iostream>


int main() {
    using namespace std;
    int number;
    cout << "Enter number of rows:" << endl;
    
    cin  >> number;
    for ( int i=0; i<number; ++i ) {
        for ( int j=0; j<number-i-1; ++j ) cout << ". ";
        for ( int k=0; k< i+1; ++k  ) cout << "* ";
        cout << endl;
    }
    return 0;
}
