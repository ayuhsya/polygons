#ifndef POLYGON_H
#define POLYGON_H

class Polygon{
	private:
		unsigned int sides;
		std::string name;
	public:
		Polygon(const unsigned int sides, const std::string& name); // const args so that they cannot be modified in the method
		const unsigned int GetSides(void) const; // const so that this method cannot modify class members
		void SetSides(const unsigned int sides);

		const std::string& GetName(void) const;
		void SetName(const std::string& name);
};

// do not define a function outside the class in .h file
// declare the function in .h, define in .cpp
// or declare and define inside class
bool operator<(const Polygon& polygon1, const Polygon& polygon2);

#endif
