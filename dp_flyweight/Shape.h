#ifndef _SHAPE_H_
#define _SHAPE_H_

class Shape{

public:

	Shape();

	Shape(const Shape&);

	Shape &operator=(const Shape&);

	virtual ~Shape();

	virtual void draw() = 0;

};
#endif