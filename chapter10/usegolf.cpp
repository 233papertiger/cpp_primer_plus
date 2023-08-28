#include <iostream>
#include "golf.h"
#include <cstring>
#include <vector>

const int ArSize = 4;
int main() {
    using namespace std;
    vector<golf> golfs;
    
    int i;
    for ( i = 0; i < ArSize; ++i )
		golfs.push_back(golf());

    int hc;
    char name[golf::Len] = {'\0'};
    cout << "Modify user name: ";

    cin.getline(name, golf::Len);
    cout << "Handicap: ";
    cin >> hc;
    
    int j;
    for ( j = 0; j < i; ++j ) {
        if ( strcmp(golfs[j].getfullname(), name) == 0 )
            break;
    }

    golfs[j].sethandicap(hc);
    golfs[j].showgolf();
	return 0;
}
