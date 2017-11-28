#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Polygon.h"

class Rectangle: public Polygon {
private:
	unsigned int length, breadth;
public:
	Rectangle(const std::string& name);
	Rectangle(const std::string& name, const unsigned int length, const unsigned int breadth);
	
	const unsigned int GetLength(void) const;
	void SetLength(const unsigned int length);

	const unsigned int GetBreadth(void) const;
	void SetBreadth(const unsigned int breadth);

	unsigned int GetArea(void) const;
};

#endif