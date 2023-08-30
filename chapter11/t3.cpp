#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vector03.h"
#include <climits>


int main() {
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));

    double direction;
    Vector step;
    Vector result(0.0, 0.0);

    unsigned long steps = 0;
    double target;
    double dstep;

    int N = 0, N_copy = 0;
    cout << "Enter the test number: " << endl;
    cin >> N;
    
	N_copy = N;
    int *arr = new int[N];
    cout << "Enter target distance (q to quit): ";
    cin >> target;
    
    cout << "Enter step length: ";
	cin >> dstep;
    
    for ( int i = 0; i < N; ++i ) {
        while (result.magval() < target) {
            direction = rand() % 360;
            
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }
        
        arr[--N_copy] = steps;
        cout << "After " << steps << " steps, the subject "
            "has the following location:\n";
        cout << result << endl;
        
        result.polar_mode();
        steps = 0;
        result.reset(0.0, 0.0);
    }

    int max = 0, min = INT_MAX, total = 0;
    for ( int i = 0; i < N; ++i ) {
        if ( arr[i] > max ) max = arr[i];
        if ( arr[i] < min) min = arr[i];
        total += arr[i];
    }
    cout << "Max step: " << max << endl;
    cout << "Min step: " << min << endl;
    cout << "Mean step:" << total / N << endl;
    
	delete[] arr;
    cout << "Bye!\n";
    cin.clear();
    while ( cin.get() != '\n' ) continue;
    return 0;
}
