#include <iostream>
#include <vector>
#include <numeric>



int main() {
    using namespace std;
    vector<double> arr(10, 0.0);
    cout << "Enter the donations(press q to quit): ";
   
    int count = 0; 
    for ( double &d: arr ) {
        cin >> d;

        while ( cin.fail() ) {
            cin.clear();
			int ch;
			if ( (ch = cin.get()) == 'q') 
				goto outer;
			
			cout << "Data type mismatch, please enter the value again: ";
			while ( (ch = cin.get()) != '\n');
			cin >> d;
        } 
        ++count;
    }
	outer:
    double sum = accumulate(arr.begin(), arr.end(), 0);
    cout << endl;
    cout << "The mean value of donations is: " << sum/count << endl;
    
    int num = 0;
    for (int i=0; i<count; ++i)
        if ( arr[i] > (sum/count) ) ++num;
    
    cout << "The value of donation exceeds mean value number is: " 
         << num << endl;
    return 0;
}
