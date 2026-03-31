#include <iostream>
using namespace std;

class Circle {
	int radius = 1;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}


int main() {
	Circle Circles[3] = { Circle(1),Circle(5), Circle() };
	for (int i = 0; i < 3; i++) {
		cout << Circles[i].getArea() << "\t";
	}
	return;
}