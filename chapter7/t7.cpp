#include <iostream>


const int Max = 5;
double *fill_array(double *ar, int limit);
void show_array(const double *start, const double *end);
void revalue(double r, double *begin, double *end);


int main() {
    using namespace std;
    double properties[Max];

    double *end = fill_array(properties, Max);
    show_array(properties, end);
    if ( properties != end ) {
        cout << "Enter revaluation factor: ";
        double factor;
        while ( !(cin >> factor)) {
            cin.clear();
            while (cin.get() != '\n') continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, end);
        show_array(properties, end);
    }

    cout << "Done.\n";
    return 0;
}


double* fill_array(double *ar, int limit) {

    using namespace std;
    double temp;
    int i;

    for ( i=0; i<limit; ++i ) {
        cout << "Enter value #" << i+1 << ": ";
        cin >> temp;

        if ( !cin ) {
            cin.clear();
            while ( cin.get() != '\n' ) continue;
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp < 0)
            break;
        ar[i] = temp;
    }
    return ar + i;
}

void show_array(const double *start, const double *end) {
    using namespace std;
    int i = 0;
    for ( auto p=start; p != end; ++p ) {
        cout << "Property #" << i+1 << ": $";
        cout << *p << endl;
        ++i;
    }
}


void revalue(double r, double *start, double *end) {
    for ( auto p = start; p != end; ++p )
        *p *= r;
}
