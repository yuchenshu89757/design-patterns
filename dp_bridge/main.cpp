#include "Blue.h"
#include "Red.h"
#include "White.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"

int main(void)
{
	Shape *circle = new Circle("Circle");
	circle->set_color(new White);
	circle->draw();
	return 0;
}