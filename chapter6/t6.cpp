#include <iostream>

const int ArSize = 100;
struct donator{
    char fullname[ArSize];
    double donation;
};



int main() {
    using namespace std;
    int amount;
    cout << "Enter the donators amount: ";
    
    cin >> amount;
    donator *persons = new donator[amount];
    for ( int i = 0; i < amount; ++i ) {
        cout << "Enter person fullname: ";
        cin >> persons[i].fullname;
        cout << "Enter person donation: ";
        cin >> persons[i].donation;
    }
    
    bool grand_patrons = true, patrons = true;
    int grand_num = 0;
    for ( int i = 0; i < amount; ++i ) {
        if ( grand_patrons ) {
            cout << "Grand Patrons:" << endl;
            grand_patrons = false;
        }
            
        if ( persons[i].donation > 10000 ) {
            cout << persons[i].fullname << " donates: " 
                 << persons[i].donation << endl;
            ++grand_num;
        }
            
    }
    
    if ( grand_num == 0 ) cout << "none" << endl;
    for ( int i = 0; i < amount; ++i ) {
        if ( patrons ) {
            cout << "Patrons:" << endl;
            patrons = false;
        }
            
        if ( persons[i].donation <= 10000 )
            cout << persons[i].fullname << " donates: " 
                 << persons[i].donation << endl;
    }
    if ( grand_num == amount ) cout << "none" << endl;
    delete[] persons;
    return 0;
}
