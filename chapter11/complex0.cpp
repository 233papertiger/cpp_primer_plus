#include <iostream>
#include "complex0.h"

complex::complex(double r, double v) {
    real = r;
    virt = v;
}

complex complex::operator+(const complex & c) const {
    return complex(real + c.real, virt + c.virt);
}

complex complex::operator-(const complex & c) const {
    return complex(real - c.real, virt - c.virt);
}

complex complex::operator*(const complex & c) const {
    return complex(real * c.real - virt * c.virt, real *c.virt + virt *c.real);
}

complex complex::operator*(double coef) const {
    return complex(coef * real, coef * virt);
}

complex operator~(const complex & c) {
    return complex(c.real, -c.virt);
}

complex operator*(double coef, const complex & c) {
    return c * coef;
}

std::ostream & operator<<(std::ostream & os, const complex & c) {
    os << "(" << c.real << "," << c.virt <<"i)";
    return os;
}

std::istream & operator>>(std::istream & is, complex & c) {
    std::cout << "real: ";
    is >> c.real;
    
	if (is.fail()) {
		return is;
	}

    std::cout << "imaginary: ";
    is >> c.virt;
    return is;
}

complex::~complex() {

}
