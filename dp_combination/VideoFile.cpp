#include "VideoFile.h"
#include <iostream>

VideoFile::VideoFile() = default;

VideoFile::VideoFile(const std::string &name) :File(name){}

VideoFile::VideoFile(const VideoFile &file) = default;

VideoFile &VideoFile::operator=(const VideoFile &rhs) = default;

VideoFile::~VideoFile() = default;

void VideoFile::display()const
{
	std::cout << "这是视频文件，文件名：" << _name_ << std::endl;
}