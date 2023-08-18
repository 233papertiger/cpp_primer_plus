#include <iostream>


int main() {
    using namespace std;
    int years = 0;
	double daphne_amount = 100.0, cleo_amount = 100.0;    
    while ( daphne_amount > cleo_amount or years == 0) {
        daphne_amount += 100 * 0.1;
        cleo_amount += cleo_amount * 0.05;
        ++years;
    }
    cout << "Years = " << years << endl;
    return 0;
}
