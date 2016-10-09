#ifndef _VIDEOFILE_H_
#define _VIDEOFILE_H_

#include "File.h"

class VideoFile : public File{

public:

	VideoFile();

	VideoFile(const std::string&);

	VideoFile(const VideoFile&);

	VideoFile &operator=(const VideoFile&);

	~VideoFile();

	void display()const override;

};
#endif