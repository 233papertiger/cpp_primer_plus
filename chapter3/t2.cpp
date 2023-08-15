#include <iostream>
const int FOOT2INCH = 12;
const double POUND2KG = 2.2046;
const double INCH2METER = 0.0254;

int main(){
    using namespace std;
	double foot, inch, weight;
	cout << "Enter your heigth, seperated with whitespace between foot and inch:";

	cin >> foot >> inch;
	cout << "Enter your weight(pound):";
    cin >> weight;

	double height = (foot * FOOT2INCH + inch) * INCH2METER;
	weight = weight * POUND2KG;
	double bmi = weight / (height * height);
	
	cout << "bmi = " << bmi << endl;
	return 0;
}
