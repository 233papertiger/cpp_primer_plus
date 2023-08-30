#include "mytime3.h"

Time::Time() {
    hours = minutes = 0;
}

Time::Time(int h, int m) {
    hours = h;
    minutes = m;
}

void Time::AddMin(int m) {
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time::AddHr(int h) {
    hours += h;
}

void Time::Reset(int h, int m) {
    hours = h;
    minutes = m;
}

Time operator+(const Time & t1, const Time & t2) {
    return Time(t1.hours + t2.hours + (t1.minutes + t2.minutes) / 60, 
                (t1.minutes + t2.minutes) % 60);
}

Time operator-(const Time & t1, const Time & t2) {
    Time diff;
    int tot1 = t1.minutes + 60 * t1.hours;
    int tot2 = t2.minutes + 60 * t2.hours;
    
    diff.minutes = (tot1 - tot2) % 60;
    diff.hours = (tot1 - tot2) / 60;
    return diff;
}

Time operator*(const Time & t, double n) {
    Time result;
    long totalminutes = t.hours * 60 + t.minutes;
    totalminutes *= n;
    
    result.hours = totalminutes / 60;
    result.minutes = totalminutes % 60;
    return result;
}

Time operator*(double m, const Time & t) {
    return operator*(t, m);
}

std::ostream & operator << (std::ostream & os, const Time & t) {
    os << t.hours << " hours, " << t.minutes << " minutes";
    return os;
}
