#include "Folder.h"

Folder::Folder() = default;

Folder::Folder(const std::string &name) :File(name){}

Folder::Folder(const Folder &folder) = default;

Folder &Folder::operator=(const Folder &rhs) = default;

Folder::~Folder() = default;

void Folder::add(File *fp)
{
	this->_files_.push_back(fp);
}

void Folder::remove(File *fp)
{
	for (auto it = _files_.begin(); it != _files_.end(); it++)
	{
		if (*it == fp)
			_files_.erase(it);
	}
}

void Folder::display()const
{
	for (auto fp : _files_)
		fp->display();
}