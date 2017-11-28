#include <iostream>
#include "Polygon.h"

Polygon::Polygon(const unsigned int sides, const std::string &name) {
	this->sides=sides;
	this->name=name;
}

const unsigned int Polygon::GetSides(void) const {
	return this->sides;
}

void Polygon::SetSides(const unsigned int sides) {
	this->sides=sides;
}

const std::string& Polygon::GetName(void) const {
	return this->name;
}

void Polygon::SetName(const std::string& name) {
	this->name=name;
}
