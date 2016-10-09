#ifndef _BLUE_H

#define _BLUE_H

#include "Color.h"

class Blue : public Color{

public:

	Blue();

	~Blue();

	void be_painted(Shape*)override;

};
#endif