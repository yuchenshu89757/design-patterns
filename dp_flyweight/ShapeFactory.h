#ifndef _SHAPEFACTORY_H_
#define _SHAPEFACTORY_H_

#include "Circle.h"
#include <map>

class ShapeFactory{

public:

	ShapeFactory();

//	ShapeFactory(const ShapeFactory&) = delete;

//	ShapeFactory &operator=(const ShapeFactory&) = delete;

	static Shape *getShape(const std::string &key);

	static int get_sum();

private:

	static std::map<std::string, Shape*> shapes;

};
#endif