#include <iostream>
#include <string>

using namespace std;

struct CandyBar{
    std::string brand;
    double weight;
    int calorie;
};

void construct_candy_bar(CandyBar *candy) {
    cout << "Enter candybar brand: ";
    getline(cin, candy->brand);
    cout << "Enter candybar weight: ";
    (cin >> candy->weight).get();
    cout << "Enter candybar calorie: ";
    (cin >> candy->calorie).get();
}


int main() {
    int types;
    cout << "How many type candy bar you want to store: ";
    (cin >> types).get();
        
    CandyBar *snacks = new CandyBar[types];
    
    for (int i=0; i<types; ++i) {
		construct_candy_bar(&snacks[i]);
        cout << "Candy brand: " << snacks[i].brand << endl
        << "Candy weight: " << snacks[i].weight << endl
        << "Candy calorie: " << snacks[i].calorie << endl;
        cout << "---------------------------" << endl;
    }
    delete[] snacks;
    return 0;
}
