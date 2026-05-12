#include <iostream>
using namespace std;

class Shape {
	Shape* next;
protected:
	virtual void draw() = 0;
public:
	Shape() { next = nullptr; }
	void paint() {
		draw();
	}
	Shape* add(Shape* p) {
		next = p;
		return p;
	}
	Shape* getNext() {
		return next;
	}
};

class Line : public Shape {
protected:
	virtual void draw() { cout << "Line" << endl; }
};

class Rect : public Shape {
protected:
	virtual void draw() { cout << "Rect" << endl; }
};

class Circle : public Shape {
protected:
	virtual void draw() { cout << "Circle" << endl; }
};

void drawALL(Shape *p) {
	while (p != nullptr) {
		p->paint();
		p = p->getNext();
	}
}

int main() {
	Shape* pStart = nullptr;
	Shape* pLast = nullptr;
	pStart = new Circle();
	pLast = pStart;

	pLast = pLast->add(new Rect());
	pLast = pLast->add(new Line());
	pLast = pLast->add(new Circle());
	drawALL(pStart);
}