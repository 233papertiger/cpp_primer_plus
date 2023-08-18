#include <iostream>
#include <string>

int main() {
    using namespace std;
    
    string month[12] = {
        "Jan",
        "Feb",
        "Mar",
        "Apr",
        "May",
        "Jun",
        "Jul",
        "Aug",
        "Sep",
        "Oct",
        "Nov",
        "Dec"
    };
    
    int bookAmount[12], sum = 0;

for ( int i=0; i<12; ++i) {
        cout << month[i] << " book sale amount: ";
        cin >> bookAmount[i];
        sum += bookAmount[i];
    }
    cout << "The whole year sells " << sum << " books" << endl;
    return 0;
}
