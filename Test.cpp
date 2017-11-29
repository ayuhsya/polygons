#include <iostream>
#include <string>
#include "Polygon.h"
#include "Rectangle.h"

int main() {
	Polygon polygon1=Polygon(5, "Pentagon"), polygon2=Polygon(8, "Octagon");

	// Test Polygon class
	std::cout<<polygon1.GetName()<<" has "<<polygon1.GetSides()<<" sides."<<std::endl;
	std::cout<<polygon2.GetName()<<" has "<<polygon2.GetSides()<<" sides."<<std::endl;
	
	// Test operator Overloading
	if (polygon1<polygon2) std::cout<<"Polygon1 has less sides."<<std::endl;
	else std::cout<<"Polygon2 has less sides."<<std::endl;

	// Test Setters
	polygon1.SetName("Hexagon"), polygon1.SetSides(6);

	std::cout<<polygon1.GetName()<<" has "<<polygon1.GetSides()<<" sides."<<std::endl;

	// Test derived class
	Rectangle rectangle=Rectangle("Recky the rectangle", 4, 5);

	std::cout<<rectangle.GetName()<<" has length "<<rectangle.GetLength()<<" and breadth "<<rectangle.GetBreadth()<<
									". Area is "<<rectangle.GetArea()<<"."<<std::endl;

	return 0;
}
