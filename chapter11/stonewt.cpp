#include <iostream>
using std::cout;
#include "stonewt.h"

Stonewt::Stonewt() {
    stone = pounds = pds_left = 0;
}

Stonewt::Stonewt(double lbs, Mode form) {
    stone = int(lbs) / Lbs_per_stn;
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
    mode = form;
}

Stonewt::Stonewt(int stn, double lbs, Mode form) {
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
    mode = form;
}

Stonewt Stonewt::operator+(const Stonewt & stn) const {
    return Stonewt(pounds + stn.pounds);
}

Stonewt Stonewt::operator-(const Stonewt & stn) const {
    return Stonewt(pounds - stn.pounds);
}

Stonewt Stonewt::operator*(double coef) const {
    return Stonewt(pounds * coef);
}

Stonewt::~Stonewt() {
}

Stonewt operator*(double coef, const Stonewt & stn) {
    return stn * coef;
}

std::ostream & operator<<(std::ostream & os, const Stonewt & s) {
    if ( s.mode == Stonewt::STONE )
        os << s.stone << " stone, " << s.pds_left << " pounds\n";
    else if ( s.mode == Stonewt::POUND )
        os << s.pounds << " pounds\n";
    return os;
}
