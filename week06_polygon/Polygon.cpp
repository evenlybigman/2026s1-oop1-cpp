#include <iostream>
#include "Polygon.h"
using namespace std;

Polygon::Polygon(int size) {
	this->size = size;
	xlist = new int[this->size];
	ylist = new int[this->size];
}

Polygon::~Polygon() {
	delete[] xlist;
	delete[] ylist;
}

void Polygon::read() {
	cout << "아래의 x, y 값으로" << size << "개의 점을 입력하세요." << endl;
	for (int i = 0; i < size; i++) {
		cin >> xlist[i] >> ylist[i];
	}
}

bool Polygon::get(int n, int& x, int& y) {
	if (n <= 0 || n > size)
		return false;
	else {
		x = xlist[n - 1];
		y = ylist[n - 1];
		return true;
	}
}