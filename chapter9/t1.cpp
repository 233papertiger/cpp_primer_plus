#include <iostream>
#include "golf.h"
#include <cstring>

const int ArSize = 4;
int main() {
    using namespace std;
    golf arr[ArSize];
    
    int i;
    for ( i = 0; i < ArSize; ++i ) {
        int res = setgolf(arr[i]);
        if ( res == 0 ) {
            if ( cin.fail() ) {
                while ( cin.get() != '\0' ) 
                    continue;
            }
            break;
        }
    }
    
    int hc;
    char name[Len] = {'\0'};
    cout << "Modify user name: ";
    cin.getline(name, Len);
    
    cout << "Handicap: ";
    cin >> hc;
    int j;
    
    for ( j = 0; j < i; ++j ) {
        if ( strcmp(arr[j].fullname, name) == 0 )
            break;
    }
    
    handicap(arr[j], hc);
    showgolf(arr[j]);
    return 0;
}
