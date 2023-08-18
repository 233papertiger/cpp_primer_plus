#include <iostream>
#include <string>

int main() {
    using namespace std;
    string months[12] = {
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

    int bookAmount[3][12], sum = 0;
    for ( int j=0; j<3; ++j ) {
        cout << "At " << j+1 << " year: " << endl;
        for ( int i=0; i<12; ++i) {
                cout << months[i] << " book sale amount: ";
                cin >> bookAmount[j][i];
                sum += bookAmount[j][i];
        }
    }
    cout << "The three years sells " << sum << " books" << endl;
    return 0;
}
