#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(const std::string& name): Polygon(4, name) {
	this->length=0;
	this->breadth=0;
}

Rectangle::Rectangle(const std::string& name, const unsigned int length, const unsigned int breadth): Polygon(4, name) {
	this->length=length;
	this->breadth=breadth;
}

void Rectangle::SetLength(const unsigned int length) {
	this->length=length;
}

const unsigned int Rectangle::GetLength(void) const {
	return this->length;
}

void Rectangle::SetBreadth(const unsigned int breadth) {
	this->breadth=breadth;
}

const unsigned int Rectangle::GetBreadth(void) const {
	return this->breadth;
}

unsigned int Rectangle::GetArea(void) const {
	return this->length*this->breadth;
}