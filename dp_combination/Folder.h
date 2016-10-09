#ifndef _FOLDER_H_
#define _FOLDER_H_

#include "File.h"

#include <vector>

class Folder : public File{

public:

	Folder();

	Folder(const std::string&);

	Folder(const Folder&);

	Folder &operator=(const Folder&);

	~Folder();
	/************************************
	* @desc : add file to folder
	* @para : file
	* @return : void
	************************************/
	void add(File *fp);
	void remove(File *fp);
	void display()const override;

private:

	std::vector<File*> _files_;

};
#endif