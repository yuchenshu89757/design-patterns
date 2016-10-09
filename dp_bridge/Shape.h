#ifndef _SHAPE_H

#define _SHAPE_H

#include <string>

class Color;

class Shape{

public:

	Shape();

	Shape(const std::string&);

	virtual ~Shape();

	virtual void draw() = 0;

	virtual void set_color(Color*);

	void set_name(const std::string&);

	 std::string get_name()const;

protected:

	Color *_color;

	std::string _name;
};
#endif