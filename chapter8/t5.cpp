#include <iostream>
#include <cstring>

template<typename T>
T maxn(T ar[], int n); 

template<> char * maxn(char *ar[], int n);
int main() {
    using namespace std;
    int arr1[6] = {1, 3, 2, 8, 5, 3};
    double arr2[4] = {3.14, 2.04, 5.46, 147.4};
    
    char str1[] = "good";
    char str2[] = "night";
    char str3[] = "good night, my baby!";
    
    char str4[] = "hello, good morning!";
    char str5[] = "tell me the reason that you leave!";    
    char *arr[] = {str1, str2, str3, str4, str5};
    
    cout << "Max int value: " << maxn(arr1, 6) << endl;
    cout << "Max double value: " << maxn(arr2, 6) << endl;
    cout << "Max length value: " << maxn(arr, 5) << endl;
    return 0;
}

template<typename T>
T maxn(T ar[], int n) {
    int j = 0;
    for ( int i = 0; i < n; ++i )
        if ( ar[i] > ar[j] ) j = i;
    return ar[j];
}

template<> char * maxn(char *ar[], int n) {
    int j = 0;
    for ( int i=0; i<n; ++i )
        if ( strlen(ar[i]) > strlen(ar[j]) )
            j = i;
    return ar[j];
}
