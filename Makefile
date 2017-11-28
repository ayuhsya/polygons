all: Polygon.cpp Test.cpp Rectangle.cpp
	g++ -o testpolygon Polygon.cpp Test.cpp Rectangle.cpp -I .

clean:
	rm -f testpolygon