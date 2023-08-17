#include <iostream>
#include <string>


struct Pizza{
    std::string company_name;
    int radius;
    double weight;
};

int main() {
    using namespace std;
    Pizza p;
    cout << "Pizza company name: ";
    
    getline(cin, p.company_name);
    cout << "Pizza radius: ";
    cin >> p.radius;
    
    cout << "Pizza weight: ";
    cin >> p.weight;
    
    cout << "Company name: " << p.company_name << endl 
         << "radius: " << p.radius << endl
         << "weight: " << p.weight << endl;
    return 0;
}
