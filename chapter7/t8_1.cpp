#include <iostream>

const int ArSize = 4;
const char *seasons[4] = {"Spring", "Summer", "Fall", "Winter"};

struct expend{
    double pay[ArSize] = {0.0};
};
void fill(expend *start);
void show(expend *start);
int main() {
    using namespace std;
    expend e;
    fill(&e);
    
    show(&e);
    return 0;
}

void fill(expend *start) {
    using namespace std;
    for ( int i = 0; i < ArSize; ++i ) {
        cout << "Enter " << seasons[i]  << " expend: ";
        cin >> start->pay[i];
    }
}

void show(expend *start) {
    using namespace std;
    for ( int i = 0; i < ArSize; ++i ) {
        cout << start->pay[i] << " ";
    }
	cout << endl;
}
