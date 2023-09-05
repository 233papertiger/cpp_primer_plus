#ifndef _CD_H_
#define _CD_H_
// cd.h


class Cd {
    private:
        char performers[50];		// 乐队
    	char label[20];				// 唱片公司
        int selections;				// 入选者
        double playtime;			// 演奏时长

    public:
    	Cd(const char * s1, const char * s2, int n, double x);
    	Cd(const Cd & d);
    	Cd();

    	virtual ~Cd();
    	virtual void Report() const;
    	virtual Cd & operator=(const Cd & d);
};


class Classic: public Cd {
    private:
    	enum {ArSize = 50};
    	char composition[ArSize];
    
    public:
    	Classic();
    	Classic(const char * s1, const char * s2, const char * s3, int n, double x);
    	Classic(const Classic &);
    	
    	~Classic();
    	void Report() const;
        Classic & operator=(const Classic &);
};

#endif
