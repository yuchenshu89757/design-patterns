#ifndef _WHITE_H

#define _WHITE_H

#include "Color.h"

class White : public Color{
	
public:

	White();
	
	~White();

	void be_painted(Shape*)override;

};
#endif