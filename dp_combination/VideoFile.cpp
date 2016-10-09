#include "VideoFile.h"
#include <iostream>

VideoFile::VideoFile() = default;

VideoFile::VideoFile(const std::string &name) :File(name){}

VideoFile::VideoFile(const VideoFile &file) = default;

VideoFile &VideoFile::operator=(const VideoFile &rhs) = default;

VideoFile::~VideoFile() = default;

void VideoFile::display()const
{
	std::cout << "������Ƶ�ļ����ļ�����" << _name_ << std::endl;
}