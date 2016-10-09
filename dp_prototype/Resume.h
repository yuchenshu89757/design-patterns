#ifndef RESUME_H
#define RESUME_H
#include <iostream>
class Resume{
public:
	Resume();
	virtual ~Resume();
	virtual Resume *clone() = 0;
	virtual void    show()  = 0;
	void set_name(const std::string&);
	void set_sex(const std::string&);
	void set_age(const std::string&);
	void set_timeArea(const std::string&);
	void set_company(const std::string&);
protected:
	std::string r_name;
	std::string r_sex;
	std::string r_age;
	std::string timeArea;
	std::string company;
};
#endif