#include <iostream>
#include <string>
#include <cstring>


using namespace std;
string & stringConvert(string & str);
int main() { 
    
	string s;
    cout << "Enter a string (q to quit): ";
	getline(cin, s);
    
	while ( cin.good() ) {
    	stringConvert(s);
        if ( s == "Q" ) {
            cout << "Bye." << endl;
            break;
        } 
    
		cout << s << endl;
        cout << "Next string (q to quit): ";
		
		getline(cin, s);
    	stringConvert(s); 
    }
    return 0;
}


string & stringConvert(string & str) {
    for ( auto &ch: str ) {
        if ( isalpha(ch) ) 
			ch = toupper(ch);
    }
    return str;
}
