#include <iostream>
#include <cctype>


int main() {
    using namespace std;
    int ch;
    while ( (ch = cin.get()) != '@' ) {
        if ( isalpha(ch) ) {
            if (islower(ch)) ch = toupper(ch);
            else ch = tolower(ch);
        }
        cout << char(ch);
    }
    cout << endl;
    return 0;
}
