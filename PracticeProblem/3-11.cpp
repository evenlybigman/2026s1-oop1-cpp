#include <iostream>
using namespace std;

class Oval {
	int width;
	int height;
public:
	Oval();
	Oval(int width, int height);
	~Oval();
	int getWidth() { return width; }
	int getHeight() { return height; }
	void set(int w, int h);
	void show();
	double area();
};

Oval::Oval() {
	this->width = 1;
	this->height = 1;
}

Oval::Oval(int width,int height) {
	this->width = width;
	this->height = height;
}

Oval::~Oval() {
	cout << "Oval 소멸 ";
	cout << width << "x" << height << endl;
}

void Oval::set(int w, int h) {
	width = w;
	height = h;
}

void Oval::show() {
	cout << "넓이:" << width << ' ';
	cout << "높이:" << height;
	cout << endl;
}

double Oval::area() {
	return (width * height * 3.14) / 4.0;
}

int main() {
	Oval kitae, jane(10, 15);
	kitae.set(3, 4);
	kitae.show();
	cout << jane.getWidth() << "x" << jane.getHeight() << ", 면적 "
		<< jane.area() << endl;
}