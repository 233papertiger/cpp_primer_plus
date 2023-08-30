#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <iostream>

class complex{
    private:
    	double real;
    	double virt;
    public:
    	complex() { real = virt = 0.0; }
    	complex(double r, double v);
    	~complex();
    
    	complex operator+(const complex & c) const;
    	complex operator-(const complex & c) const;
    	complex operator*(const complex & c) const;
    	
    
    	complex operator*(double coef) const;
    	friend complex operator~(const complex & c);
    	friend complex operator*(double coef, const complex & c);
    	friend std::ostream & operator<<(std::ostream & os, const complex & c);
    	friend std::istream & operator>>(std::istream & is, complex & c);
};

#endif
