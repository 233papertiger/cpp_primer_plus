#include <iostream>
#include <cstring>
#include "cow.h"

Cow::Cow() {
    name[0] = '\0';
    hobby = nullptr;
    weight = 0.0;
}

Cow::Cow(const char * nm, const char * ho, double wt) {
    strcpy(name, nm);
    int len = strlen(ho);
    char * ptr = new char[len+1];
    
    strcpy(ptr, ho);
    hobby = ptr;
    weight = wt;
}

Cow::Cow(const Cow &c) {				// 拷贝构造
    strcpy(name, c.name);
    int len = strlen(c.hobby);
    char *ptr = new char[len+1];
    
    strcpy(ptr, c.hobby);
    hobby = ptr;
    weight = c.weight;
}

Cow::~Cow() {
    delete[] hobby;
}

Cow & Cow::operator=(const Cow & c) {	// 拷贝赋值
    if ( hobby == c.hobby )
        return *this;
    
    else {
        strcpy(name, c.name);
        delete[] hobby;
        int len = strlen(c.hobby);
        char *ptr = new char[len+1];
        
        strcpy(ptr, c.hobby);
        hobby = ptr;
        weight = c.weight;
		return *this;
    }
}

void Cow::ShowCow() const {
    std::cout << "name = " << name << std::endl;
    std::cout << "hobby = " << hobby << std::endl;
    std::cout << "weight = " << weight << std::endl;
}
