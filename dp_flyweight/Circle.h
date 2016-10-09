#ifndef _CIRCLE_H_
#define _CIRCLE_H_

#include "Shape.h"
#include <string>

class Circle : public Shape{

public:

	Circle(const std::string&);

	Circle(const Circle&);

	Circle &operator=(const Circle&);

	~Circle();

	void draw()override;

private:

	std::string color;

};
#endif