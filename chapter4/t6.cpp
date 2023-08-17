#include <iostream>
#include <string>


struct CandyBar{
    std::string brand;
    double weight;
    int calorie;
};

int main() {
    using namespace std;
    CandyBar snacks[3] = {
        {"Mocha Munch", 2.3, 350},
        {"Lindt", 2.5, 330},
        {"Ferrero rocher", 2.1, 300}
    };
    for (auto snack: snacks) {
        cout << "Candy brand: " << snack.brand << endl
        << "Candy weight: " << snack.weight << endl
        << "Candy calorie: " << snack.calorie << endl;
		cout << "____________________" << endl;
	}
    return 0;
}
