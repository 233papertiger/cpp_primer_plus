#include <iostream>
#include <string>


struct Pizza{
    std::string company_name;
    unsigned short radius;
    double weight;
};

int main() {
    using namespace std;
    Pizza *p = new Pizza;
    cout << "Pizza radius: ";
    
    (cin >> p->radius).get();
	cout << "Pizza company name: ";
    getline(cin, p->company_name);

    cout << "Pizza weight: ";
    cin >> p->weight;
    cout << "Company name: " << p->company_name << endl
         << "radius: " << p->radius << endl
         << "weight: " << p->weight << endl;
    delete p;
    return 0;
}
