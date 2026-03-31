#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

void print(Circle* p) {
	cout << p->getArea() << endl;
}

int main() {
	Circle donut,pizza(30);
	Circle* p;
	p = &donut;
	cout << donut.getArea() << ',' << p->getArea() << endl;
	cout << (*p).getArea() << ',' << (&donut)->getArea() << endl;
	print(&donut);
	print(&pizza);
}