#ifndef _BEAUTIFULGIRL_H_
#define _BEAUTIFULGIRL_H_

#include <string>
class BeautifulGirl{
public:
	BeautifulGirl();
	BeautifulGirl(const std::string&);
	void setName(const std::string&);
	std::string getName()const;
private:
	std::string _name;
};
#endif