#include <iostream>

const int ArSize = 4;
const char *seasons[4] = {"Spring", "Summer", "Fall", "Winter"};
double expend[ArSize] = {0.0};

void fill(double *start);
void show(double *start);
int main() {
    using namespace std;
    fill(expend);
    show(expend);
    return 0;
}

void fill(double *start) {
    using namespace std;
    for ( int i = 0; i < ArSize; ++i ) {
		cout << "Enter " << seasons[i] << " expenses: ";
        cin >> start[i];
    }
}

void show(double *start) {
    using namespace std;
    for ( int i = 0; i < ArSize; ++i ) {
        cout << start[i] << " ";
    }
	cout << endl;
}
