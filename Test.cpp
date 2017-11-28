#include <iostream>
#include <string>
#include "Polygon.h"
#include "Rectangle.h"

int main() {
	Polygon polygon=Polygon(5, "Pentagon");

	std::cout<<polygon.GetName()<<" has "<<polygon.GetSides()<<" sides."<<std::endl;

	polygon.SetName("Hexagon"), polygon.SetSides(6);

	std::cout<<polygon.GetName()<<" has "<<polygon.GetSides()<<" sides."<<std::endl;

	Rectangle rectangle=Rectangle("Recky the rectangle", 4, 5);

	std::cout<<rectangle.GetName()<<" has length "<<rectangle.GetLength()<<" and breadth "<<rectangle.GetBreadth()<<
									". Area is "<<rectangle.GetArea()<<"."<<std::endl;

	return 0;
}
