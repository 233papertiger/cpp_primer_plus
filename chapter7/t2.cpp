#include <iostream>


const int ArSize = 10;
int getScores(int scores[]) {
    using namespace std;
    int count = 0;
    
    while ( cin.good() && count < 10 ) {
        cin >> scores[count++];
        if ( cin.fail() ) {
            count--;
            cin.clear();
            cout << "Type mismatch" << endl;
            break;
        }
	}
    return count;
}


double computeMean(int scores[], int len) {
    using namespace std;
    int total = 0;
    for ( int i=0; i<len; ++i )
        total += scores[i];
    
    cout << "mean score: " 
         << 1.0 * total / len << endl;
    return 1.0 * total / len;
}


void showScores(int scores[], int len) {
    using namespace std;
    for ( int i=0; i<len; ++i ) {
        cout << scores[i] << " ";
    }
    cout << endl;
}

int main() {
    int scores[ArSize] = {0};
    int len = getScores(scores);
    
    showScores(scores, len);
    computeMean(scores, len);
    return 0;
}
