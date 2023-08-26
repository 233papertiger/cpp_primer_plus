#include <iostream>
#include <cstring>


const int Size = 100;
char buffer[Size];

struct chaff {
	char dross[20];
	int slag;
};

int main( ) {
	using namespace std;
    chaff *ptr = new (buffer)chaff[2];
    
    char name[20];
    int s;
    for ( int i = 0; i < 2; ++i ) {
        cout << "dross name: ";
        cin.getline(name, 20);
        cout << "slag: ";
        
        (cin >> s).get();
        strcpy(ptr[i].dross, name);
        ptr[i].slag = s;
    }
    
    for ( int i = 0; i < 2; ++i ) {
        cout << "Dross name: " << ptr[i].dross;
        cout << ", dross slag: " << ptr[i].slag << endl;
    }
    return 0;
}
