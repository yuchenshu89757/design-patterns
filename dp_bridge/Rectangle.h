#ifndef _RECTANGLE_H

#define _RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape{

public:

	Rectangle();

	Rectangle(const std::string&);

	~Rectangle();

	void draw()override;

};
#endif