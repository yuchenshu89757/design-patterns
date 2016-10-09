#ifndef _IMAGEFILE_H_
#define _IMAGEFILE_H_

#include "File.h"

class ImageFile : public File{

public:

	ImageFile();

	ImageFile(const std::string&);

	ImageFile(const ImageFile&);

	ImageFile &operator=(const ImageFile&);

	~ImageFile();

	void display()const override;

};
#endif