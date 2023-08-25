#include <iostream>


template<typename T> 
T max5(T arr[]);
int main() {
    using namespace std;
    int arr1[] = {1, 3, 4, 5, 2};
    double arr2[] = {65.12, 74.15, 68.78, 88.67, 77.15};
    
    cout << "Max int value: " << max5(arr1) << endl;
    cout << "Max double value: " << max5(arr2) << endl;
    return 0;
}


template<typename T> 
T max5(T arr[]) {
    int j = 0;
    for ( int i=0; i<5; ++i ) {
        if ( arr[i] > arr[j] ) 
            j = i;
    }
    return arr[j];
}
