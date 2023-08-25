#include <iostream>
using namespace std;
#include <cstring>

struct stringy{
	char * str;
    int ct;
};

void set(stringy &, const char *);
void show(const stringy &s, int size = -1);
void show(const char * str, int size = -1);

int main() {
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    
    set(beany, testing);
    show(beany);
    show(beany, 2);
    
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    
    show(testing, 3);
    show("Done!");
    return 0;
}


void set(stringy &s, const char *str) {
    int size = strlen(str);
    char *p = new char[size+1];
    strcpy(p, str);
    
    s.str = p;
    s.ct = size;
}

void show(const stringy &s, int size) {
	if ( size == -1 ) cout << s.str << endl;
	else {
		for ( int i=0; i<size; ++i)
			cout << s.str[i];
		cout << endl;
	}
}

void show(const char * str, int size) {
	if ( size == -1 ) cout << str << endl;
	else {
		for ( int i=0; i<size; ++i)
			cout << str[i];
		cout << endl;
	}
	
}
