#include "File.h"

File::File() = default;

File::File(const std::string &name):_name_(name){}

File::File(const File &file) = default;

File &File::operator=(const File &rhs) = default;

File::~File() = default;

void File::set_name(const std::string &name)
{
	this->_name_ = name;
}

std::string File::get_name()const
{
	return this->_name_;
}



