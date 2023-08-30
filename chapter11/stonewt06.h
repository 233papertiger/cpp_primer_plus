#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>

class Stonewt{
    public:
    	enum Mode {STONE, POUND};
    private:
    	enum {Lbs_per_stn = 14};
    	Mode mode;
    	int stone;
    	double pds_left;
    	double pounds;
   	public:
    	Stonewt();
    	explicit Stonewt(double lbs, Mode form = STONE);
    	explicit Stonewt(int stn, double lbs, Mode form = STONE);
    	Stonewt operator+(const Stonewt & stn) const;
    
    	Stonewt operator-(const Stonewt & stn) const;
    	Stonewt operator*(double coef) const;
    
    	bool operator>(const Stonewt & stn) const;
    	bool operator>=(const Stonewt & stn) const;
    	bool operator<(const Stonewt & stn) const;
    
    	bool operator<=(const Stonewt & stn) const;
    	bool operator==(const Stonewt & stn) const;
    	bool operator!=(const Stonewt & stn) const;
    
    	~Stonewt();
    	friend Stonewt operator*(double coef, const Stonewt & stn);
    	friend std::ostream & operator<<(std::ostream & os, const Stonewt & s);
};
#endif
