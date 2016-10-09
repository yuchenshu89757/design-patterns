#ifndef _SQUARE_H

#define _SQUARE_H

#include "Shape.h"

class Square : public Shape{

public:

	Square();

	Square(const std::string&);

	~Square();

	void draw()override;

};
#endif