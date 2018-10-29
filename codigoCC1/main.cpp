#include <iostream>
#include "Point.h"
#include "Vector.h"
using namespace std;

void swap(Point &a, Point &b) {
	Point tmp = a;
	a = b;
	b = tmp;
}

void swap(Point *a, Point *b) {
	Point tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
    /*Point p(4, 3);
	Point q(6, 7);
	
	swap(&p, &q);

	Point *ptr1 = &p;
	Point *ptr2 = &q;

	ptr1->print();
	ptr2->print();*/

	/*Point *easy = new Point(4, 4);
	easy->print();
	easy->offset(10, 10);
	easy->print();

	delete easy;*/
	
	Vector v;
	v.print();

    return 0;

}
