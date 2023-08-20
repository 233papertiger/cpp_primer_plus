#include <iostream>
#include <cstring>
const int strsize = 100;

struct bop {
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};

int main() {
    using namespace std;
	char keyword[strsize];
    bop persons[5] = {
     { "Wimp Macho", "brilliant singer", "aw", 0},
     { "Raki Rhodes", "Junior programmer", "RR", 1},
     { "Celia Laiter", "outstanding writer", "MIPS", 2},
     { "Hoppy Hipman", "Analyst Trainee", "HH", 1},
     { "Pat Hand", "outstanding writer", "LOOPY", 1}
    };
    
    cout << "Benevolent Order of Programmers Report" << endl;
    cout << "a. display by name\t\tb. display by title" << endl;
    cout << "c. display by bopname\t\td. display by preference" << endl;
    cout << "q. quit" << endl;
    
    int ch;
    cout << "Enter your choice: ";
    while ( ch = cin.get() ) {
        switch(ch) {
            case 'a': for ( bop person : persons )
                          cout << person.fullname << endl;
                      break;
            case 'b': for ( bop person : persons )
                          cout << person.title << endl;
                      break;
            case 'c': for ( bop person : persons )
                          cout << person.bopname << endl;
                      break;
            case 'd': for ( bop person : persons ) {
                          if ( person.preference == 0 )
                              cout << person.fullname << endl;
                          else if ( person.preference == 1 )
                              cout << person.title << endl;
                          else
                              cout << person.bopname << endl;
                      }
                      break;
            case 'q': cout << "Bye!" << endl;
                      goto outer;
        }
		cout << "Next choice:";
		cin.get();
    }
	outer:
    return 0;
}
