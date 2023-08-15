#include <iostream>


int main() {
    using namespace std;

	long long worldPopulation, usPopulation;
    cout << "Enter the world's population:";
	cin >> worldPopulation;
    cout << "Enter the population of the US:";
	
	cin >> usPopulation;
    cout << "The population of the US is " 
		 << usPopulation * 1.0 / worldPopulation * 100  
		 << "% of the world population." <<endl;
    return 0;
}

