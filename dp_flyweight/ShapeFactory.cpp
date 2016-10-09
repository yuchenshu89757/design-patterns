#include "ShapeFactory.h"

ShapeFactory::ShapeFactory() = default;

Shape *ShapeFactory::getShape(const std::string &key)
{
	auto it = shapes.find(key);
	if (it == shapes.end())
	{
		Shape *shape = new Circle(key);
		shapes[key] = shape;
		return shape;
	}
	return it->second;
}

int ShapeFactory::get_sum()
{
	return shapes.size();
}