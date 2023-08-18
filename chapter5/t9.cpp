#include <iostream>
#include <string>



int main() {
    using namespace std;
    cout << "Enter words(to stop, type the word done):" << endl;
    string word;
    
    int count = 0;
    while ( cin >> word ) {
        if ( word == "done" ) {
            cout << "You entered a total of "
                 << count << " words." << endl;
			break;
		} else 
            ++count;
    }
    return 0;
}
