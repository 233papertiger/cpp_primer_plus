#include <iostream>
#include <cstring>
#include <cctype>



const int ArSize = 100;
int main() {
    using namespace std;
    char word[ArSize];
    
    cout << "Enter words(q to quit): " << endl;
    cin >> word;
    int vowelCount = 0, alpha = 0, count = 0;
    
    while ( cin.good() ) {
        if ( strcmp(word,"q") == 0 ) break;
        if ( (word[0] == 'a') or (word[0] == 'e') or (word[0] == 'i')
           or (word[0] == 'o') or (word[0] == 'u'))
            ++vowelCount;
        if ( isalpha(word[0]) ) ++alpha;
        ++count;
		cin >> word;
    }
    cout << vowelCount << " words " << "beginning with vowels" << endl;
    cout << alpha - vowelCount << " words " 
         << "beginning with consonants" << endl;
    cout << count - alpha << " others" << endl;
    return 0;
}
