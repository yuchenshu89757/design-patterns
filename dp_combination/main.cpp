#include "Folder.h"
#include "TextFile.h"
#include "ImageFile.h"
#include "VideoFile.h"

int main(void)
{
	Folder *folder = new Folder("Software");
	folder->add(new ImageFile("荷塘月色.jpg"));
	folder->add(new TextFile("重要提示.txt"));
	folder->add(new VideoFile("大圣归来.avi"));

	folder->display();

	return 0;
}