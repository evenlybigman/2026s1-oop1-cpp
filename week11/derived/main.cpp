#include <iostream>
using namespace std;

class Base {
public:
	void draw() {
		cout << "Base::f()" << endl;
	}
};

class Derived : public Base {
public:
	virtual void draw() {
		cout << "Derived::f()" << endl;
	}
};

int main() {
	Base b;
	b.draw();
	Derived d;
	d.Base::draw();

	Derived* pDer = &d;
	pDer->draw();
	Base* qBase = (Base*)&d;
	qBase->draw();
}