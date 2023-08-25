#include <iostream>
#include <string>
#include <cstring>

string & stringConvert(string & str);
int main() {
    using namespace std;
    
    string s;
    cout << "Enter a string (q to quit): ";
    while ( cin >> s ) {
    	stringConvert(s);
        if ( s == "q" ) {
            cout << "Bye." << endl;
            break;
        } 
        cout << s << endl;
        cout << "Next string (q to quit): ";
    	stringConvert(s); 
    }
    return 0;
}


string & stringConvert(string & str) {
    for ( auto &ch: str ) {
        if ( isalpha(ch) ) toupper(ch);
    }
    return str;
#include <iostream>
#include <cstring>

struct CandyBar{
    char *brand;
    double weight;
    int coloria;
};

CandyBar& CandyBarSet(CandyBar &cb, const char b[]="Millennium Munch",
                      double w=2.85 , int c=350);
void ShowCandyBar(CandyBar &);
int main() {
    CandyBar candy;
    CandyBarSet(candy);

    ShowCandyBar(candy);
    return 0;
}


CandyBar& CandyBarSet(CandyBar &cb, const char b[], double w, int c) {
    int size = strlen(b);
    char *brand = new char[size + 1];
    strcpy(brand, b);

    cb.brand = brand;
    cb.weight = w;
    cb.coloria = c;
    return cb;
}


void ShowCandyBar(CandyBar &candy) {
    std::cout << "brand: " << candy.brand << std::endl;
    std::cout << "weight: " << candy.weight << std::endl;
    std::cout << "coloria: " << candy.coloria << std::endl;
}}
