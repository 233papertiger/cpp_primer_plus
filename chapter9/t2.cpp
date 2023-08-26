#include <iostream>
#include <string>



void strcount(const std::string s);

int main() {
    using namespace std;
	string line;
    
    cout << "Enter a line:\n";
    getline(cin, line);
    while ( cin.good() ) {
        strcount(line);
        cout << "Enter next line (empty line to quit):\n";
        getline(cin, line);
		if ( line == "" ) break;
    }
    cout << "Bye\n";
    return 0;
    
}

void strcount(const std::string s) {
    using namespace std;
    static int total = 0;
    int count = 0;
    
    cout << "\"" << s << "\" contains ";
    count += s.size();
    total += count;
    
    cout << count << " characters\n";
    cout << total << " characters total\n";
}
