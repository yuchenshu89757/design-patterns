#include "ImageFile.h"
#include <iostream>

ImageFile::ImageFile() = default;

ImageFile::ImageFile(const std::string &name) :File(name){}

ImageFile::ImageFile(const ImageFile &file) = default;

ImageFile &ImageFile::operator=(const ImageFile &rhs) = default;

ImageFile::~ImageFile() = default;

void ImageFile::display()const
{
	std::cout << "这是图片文件，文件名：" << _name_ << std::endl;
}