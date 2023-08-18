#include <iostream>


int main() {
    using namespace std;
    int start, end;
    cout << "Enter two number seperate with whitespace(): ";
    cin >> start >> end;
    
    int sum = 0;
    for ( int i=start; i<end+1; ++i )
        sum += i;
    cout << "sum = " << sum << endl;    
    
}
