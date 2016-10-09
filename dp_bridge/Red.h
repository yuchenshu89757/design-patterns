#ifndef _RED_H

#define _RED_H

#include "Color.h"

class Red : public Color{

public:

	Red();

	~Red();

	void be_painted(Shape*)override;

};
#endif