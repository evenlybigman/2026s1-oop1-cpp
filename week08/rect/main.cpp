#include <iostream>
using namespace std;

class Rect; //전방 선언

bool equals(Rect r, Rect s);

class Rect  {
	int width, height;
public:
	Rect(int width, int height);
	friend bool equals(Rect r, Rect s);
};

Rect::Rect(int width, int height) {
	this->width = width;
	this->height = height;
}

bool equals(Rect r, Rect s) {
	if (r.width == s.width && r.height == r.width)
		return true;
	else
		return false;
}

int main() {
	Rect a(3, 4), b(4, 5);
	if (equals(a, b)) cout << "equals" << endl;
	else cout << "not" << endl;
}