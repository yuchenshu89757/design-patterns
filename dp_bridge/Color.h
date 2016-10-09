#ifndef _COLOR_H

#define _COLOR_H

class Shape;

class Color{

public:

	Color();

	virtual ~Color();

	virtual void be_painted(Shape*) = 0;

};
#endif