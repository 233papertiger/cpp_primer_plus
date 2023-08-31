#include <cstring>
#include <cctype>
#include "string2.h"

using std::cin;
using std::cout;

int String::num_strings = 0;
int String::HowMany() {
    return num_strings;
}

String::String(const char * s){
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_strings++;
}

String::String() {
    len = 4;
    str = new char[1];
    str[0] = '\0';
    ++num_strings;
}

String::String(const String & st) {
    ++num_strings;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
}

String::~String() {
    --num_strings;
    delete[] str;
}

String & String::operator=(const String &st) {
    if ( this == &st )
        return *this;
    delete[] str;
    
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    return *this;
}

String & String::operator=(const char * s) {
    delete[] str;
    len = std::strlen(s);
    str = new char[len + 1];
    
    std::strcpy(str, s);
    return *this;
}

String String::operator+(const String &s) const {
	int size = len + s.len + 1;
	char *ptr = new char[size];
	strcpy(ptr, str);

	strcat(ptr, s.str);
	String ret(ptr);
	delete[] ptr;
	return ret;
}

String operator+(const char *s1, const String & s2) {
    int size = strlen(s1) + s2.len + 1;
    char *ptr = new char[size];
    strcpy(ptr, s1);
    
    strcat(ptr, s2.str);
    String ret(ptr);
    
    delete[] ptr;
    return ret;
}

char & String::operator[](int i) {
    return str[i];
}

const char & String::operator[](int i) const {
    return str[i];
}

String String::Stringlower() const {
    char *ptr = new char[len+1];
    strcpy(ptr, str);
    for ( int i=0; i<len; ++i) {
        if ( isalpha(ptr[i]) ) 
            ptr[i] = tolower(ptr[i]);
    }
    String ret(ptr);
    delete[] ptr;
    return ret;
}

String String::Stringupper() const{
    char *ptr = new char[len+1];
    strcpy(ptr, str);
    for ( int i=0; i<len; ++i) {
        if ( isalpha(ptr[i]) ) 
            ptr[i] = toupper(ptr[i]);
    }
    String ret(ptr);
    delete[] ptr;
    return ret;
}

int String::charCount(char ch) const {
    int count = 0;
    for ( int i=0; i<len; ++i )
        if ( str[i] == ch ) ++count;
    return count;
}

bool operator<(const String &st1, const String &st2) {
    return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String &st1, const String &st2) {
    return st2 < st1;
}

bool operator==(const String &st1, const String &st2) {
    return (std::strcmp(st1.str, st2.str) == 0);
}

ostream & operator<<(ostream & os, const String & st) {
    os << st.str;
    return os;
}

istream & operator>>(istream & is, String & st) {
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is)
        st = temp;
    while (is && is.get() != '\n')
        continue;
    return is;
}
