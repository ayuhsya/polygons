#ifndef POLYGON_H
#define POLYGON_H

class Polygon{
	private:
		unsigned int sides;
		std::string name;
	public:
		Polygon(const unsigned int sides, const std::string& name);
		const unsigned int GetSides(void) const;
		void SetSides(const unsigned int sides);

		const std::string& GetName(void) const;
		void SetName(const std::string& name);
};

#endif
