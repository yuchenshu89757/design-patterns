#include "ShapeFactory.h"

int main(void)
{
	Shape *shape1 = ShapeFactory::getShape("red");
	shape1->draw();

	return 0;
}