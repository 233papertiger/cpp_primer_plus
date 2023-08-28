// plorg.h
#ifndef PLORG_H_
#define PLORG_H_

class plorg{
    public:
    	static const int Size = 20;

    private:
        char fullname[Size];
        int ci;
    
    public:
    	plorg(const char name[] = "Alan Walker", int a = 50);
    	~plorg();
    	void setCI(int i);
    	void show() const;
};

#endif
