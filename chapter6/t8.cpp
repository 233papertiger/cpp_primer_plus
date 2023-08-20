#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>


int main() {
    using namespace std;
    string filename;
    cout << "Enter file name: ";
    
    cin >> filename;
    ifstream inFile;
    inFile.open(filename);
    
    if ( !(inFile.is_open()) ) {
        cout << "Could't find the file at " << filename << endl;
        exit(EXIT_FAILURE);
    }
    
    int count = 0;
    int ch;
    ch = inFile.get();
    while ( !inFile.eof() ) {
        ++count;
        ch = inFile.get();
    }
    
    cout << "There are " << count << " characters!";
    return 0;
}
