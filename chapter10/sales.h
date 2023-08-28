#ifndef _SALES_H
#define SALES_H

namespace SALES{
    class Sales {
        public:
        	static const int QUARTERS = 4;
        private:
            double sales[QUARTERS];
            double _average;
            double _max;
            double _min;
        public:
        	Sales();
            Sales(const double ar[], int n);
            ~Sales();
            void showSales() const;
    };
}
#endif
