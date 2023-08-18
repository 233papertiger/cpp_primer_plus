#include <iostream>
#include <string>

struct car {
    std::string manufacture;
    int year;
};

int main() {
    using namespace std;
    int amount;
    cout << "How many cars do you wish to catalog?";
    (cin >> amount).get();
    
    car *cars = new car[amount];
    for ( int i=0; i<amount; ++i ) {
        cout << "Car #" << i+1 << ":" << endl;
        cout << "Please enter the make: ";
        getline(cin, cars[i].manufacture);
        
        cout << "Please enter the year made: ";
        (cin >> cars[i].year).get();
    }

    cout << "Here is your collection:" << endl;
    for ( int i=0; i<amount; ++i )
        cout << cars[i].year << " " << cars[i].manufacture << endl;


    return 0;
}
