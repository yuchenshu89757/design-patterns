#ifndef _FILE_H_
#define _FILE_H_

#include <string>

class File{

public:

	File();

	File(const std::string&);

	File(const File&);

	File &operator=(const File&);

	virtual ~File();

	void set_name(const std::string&);

	std::string get_name()const;

	virtual void display()const = 0;

protected:
	
	std::string _name_;

};
#endif