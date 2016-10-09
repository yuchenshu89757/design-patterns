#include "Folder.h"
#include "TextFile.h"
#include "ImageFile.h"
#include "VideoFile.h"

int main(void)
{
	Folder *folder = new Folder("Software");
	folder->add(new ImageFile("������ɫ.jpg"));
	folder->add(new TextFile("��Ҫ��ʾ.txt"));
	folder->add(new VideoFile("��ʥ����.avi"));

	folder->display();

	return 0;
}