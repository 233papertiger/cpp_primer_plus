#include <iostream>


int main() {
    using namespace std;
    double salary;
    cout << "Enter the user salary: ";
    cin >> salary;
    
    while ( cin.good() ) {
        if ( salary < 0) break;
        cout << "After tax: ";
        if ( salary <= 5000 ) cout << salary << endl;
        else if ( salary >= 5001 and salary <= 15000 )
            cout << salary - (salary - 5000) * 0.1 << endl;
        else if ( salary >= 15001 and salary <= 35000 )
            cout << salary - (salary - 15000) * 0.15 
            - 10000 * 0.1 << endl;
        else
            cout << salary - (salary - 35000) * 0.2 - 
            10000 * 0.1 - 20000 * 0.15 << endl;
        cin >> salary;
    }
    return 0;
}
