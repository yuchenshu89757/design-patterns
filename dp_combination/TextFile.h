#ifndef _TEXTFILE_H_
#define _TEXTFILE_H_

#include "File.h"

class TextFile : public File{

public:

	TextFile();

	TextFile(const std::string&);

	TextFile(const TextFile&);

	TextFile &operator=(const TextFile&);

	~TextFile();

	void display()const override;

};
#endif