#include <iostream>
#include <string>



struct CandyBar{
	std::string brand;
    double weight;
    int calorie;
};

int main() {
	using namespace std;
	CandyBar snack{"Mocha Munch", 2.3, 350};
    cout << "Candy brand: " << snack.brand << endl
         << "Candy weight: " << snack.weight << endl
         << "Candy calorie: " << snack.calorie << endl;
    return 0;
}
