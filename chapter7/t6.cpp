#include <iostream>


const int ArSize = 100;
int fill_array(double *ar, int len);
void show_array(double *ar, int len);
void reverse_array(double *ar, int len);

int main() {
	using namespace std;
	double arr[ArSize];

	int size = fill_array(arr, ArSize);
	show_array(arr, size);
	reverse_array(arr, size);

	show_array(arr, size);
	return 0;
}


int fill_array(double *ar, int len) {
	using namespace std;
	int count = 0;
	cout << "Enter value: ";
	
	while ( cin >> ar[count++] ) {
		if ( count == ArSize ) break;
		cout << "Enter next value: ";
		
	}

	if ( cin.fail() ) count -= 1;
	return count;
}

void show_array(double *ar, int len) {
	using namespace std;
	for ( int i = 0; i < len; ++i ) {
		cout << ar[i] << " "; 
	}
	cout << endl;
}

void reverse_array(double *ar, int len) {
	using namespace std;
	int start = 0, end = len - 1;
	for ( int i=start, j = end; i < j; ++i, --j ) {
		swap(ar[i], ar[j]);
	}
}
