#ifndef _CIRCLE_H

#define _CIRCLE_H

#include "Shape.h"

class Circle : public Shape{

public:

	Circle();

	Circle(const std::string&);

	~Circle();

	void draw()override;

};
#endif