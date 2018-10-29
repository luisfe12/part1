#include <iostream>
#include "Vector.h"

Vector::Vector(){}

Vector::Vector(Point s, Point e){
	start = s;
	end = e;
}

Vector::Vector(Vector &v){
	start = v.start;
	end = v.end;
}

void Vector::offset(int x, int y){
	start.offset(x, y);
	end.offset(x, y);
}

void Vector::print() {
	start.print();
	std::cout << " -> ";
	end.print();
	std::cout << std::endl;
}

