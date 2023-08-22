#include <iostream>


double harmonic_mean(double x, double y) {
    return 2.0 * x * y / (x + y);
}

int main() {
    using namespace std;
    double x, y;
    cout << "Enter two values: ";
    
    
    cin >> x >> y;
    while ( cin.good() && x != 0 && y != 0 ) {
        cout << "Harmonic mean: " << harmonic_mean(x, y) << endl;
        cout << "Enter two values: ";
        cin >> x >> y;
    }
    
    return 0;
}
