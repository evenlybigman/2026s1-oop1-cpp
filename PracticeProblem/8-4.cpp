#include <iostream>
#include <string>
using namespace std;

class Point {
	int x, y;
public:
	Point(int x, int y) { this->x = x; this->y = y; }
	int getX() { return x; }
	int getY() { return y; }
protected:
	void move(int x, int y) { this->x = x; this->y = y; }
};

class Point3D : public Point {
	int z;
public:
	Point3D(int x, int y, int z);
	void upZ();
	void left();
	void up();
	void show();
	void set(int x, int y, int z);
};

Point3D::Point3D(int x, int y, int z)
	:Point(x, y) {
	this->z = z;
}

void Point3D::upZ() {
	z = z + 1;
}

void Point3D::left() {
	move(getX() - 1, getY());
}

void Point3D::up() {
	move(getX(), getY() + 1);
}

void Point3D::show() {
	cout << "(" << getX() << "," << getY() << "," << z << ")" << endl;
}

void Point3D::set(int x, int y, int z) {
	move(x, y); 
	this->z = z;
}

int main() {
	Point3D p(1, 2, 3); //1,2,3은 각 각 x,y,z 축의 값
	p.show(); // (1,2,3)
	p.upZ(); // z축으로 이동
	p.left(); // x축으로 이동
	p.up(); // y축으로 이동
	p.show(); // (0,3,4)
	p.set(10, 20, 30); 
	p.show(); // 10,20,30
}