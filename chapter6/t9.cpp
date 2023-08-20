#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>



using namespace std;
struct donator{
    string fullname;
    double donation;
};

int main() {
   string filename;
    cout << "Enter the filename: ";
   
	cin >> filename;
    ifstream inFile;
    inFile.open(filename);
    
    if ( !inFile.is_open() ) {
        cout << "The file not exists at " << filename;
        exit(EXIT_FAILURE);
    }
    
    int amount;
    (inFile >> amount).get();
    donator *persons = new donator[amount];
    
    for ( int i=0; i < amount && inFile.good(); ++i ) {
        getline(inFile, persons[i].fullname);
        (inFile >> persons[i].donation).get();
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
