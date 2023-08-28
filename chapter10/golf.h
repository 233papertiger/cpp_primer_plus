// golf.h
#ifndef GOLF_H_
#define GOLF_H_

class golf {
    public:
    	static const int Len = 40;
    
    private:
        char fullname[Len];
        int handicap;
    
    public:
    	golf();
    	golf(const char * name, int hc);
        void sethandicap(int hc);
    	
		char *getfullname();
    	void showgolf();
    	~golf();
};

#endif
