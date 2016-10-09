#include "TextFile.h"
#include <iostream>

TextFile::TextFile() = default;

TextFile::TextFile(const std::string &name) :File(name){}

TextFile::TextFile(const TextFile &file) = default;

TextFile &TextFile::operator=(const TextFile &name) = default;

TextFile::~TextFile() = default;

void TextFile::display()const
{
	std::cout << "�����ı��ļ����ļ�����" << _name_ << std::endl;
}