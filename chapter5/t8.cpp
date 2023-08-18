#include <iostream>
#include <cstring>
const int ArraySize = 100;


int main() {
    using namespace std;
    cout << "Enter words(to stop, type the word done):" << endl;
    char word[ArraySize] = {};
    
    int count = 0;
    int ch;
    int i = 0;
    
    while ( (ch = cin.get()) ) {
        if ( ch == ' ' or ch == '\n' ) {
            word[i] = '\0';
            if ( strcmp(word, "done") == 0 ) {
                cout << "You entered a total of " 
                     << count << " words." << endl;
                break;
            } else if ( strlen(word) != 0 ) 
                ++count;
            i = 0;
        } else {
            word[i++] = (char)ch;
        }
        
    }
    return 0;
}
