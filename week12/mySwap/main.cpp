#include <iostream>
using namespace std;

template <class T> 
void myswap(T& a, T& b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

class Circle {
	int radius;
public:
	Circle(int radius = 1) { this->radius = radius; }
	int getRadius() { return radius; }
};

void main() {
	int a = 4, b = 5;

	myswap(a, b);
	cout << a << ", " << b << endl;
	
	double c = 0.3, d = 12.5;

	myswap(c, d);
	cout << c << ", " << d << endl;
	
	Circle donut(15), pizza(20);
	
	myswap(donut, pizza);
	cout << donut.getRadius() << ", " << pizza.getRadius() << endl;
}