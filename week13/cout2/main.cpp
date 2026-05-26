#include <iostream>
#include <string>
using namespace std;

class Point {
	int x;
	int y;
public:
	Point(int x, int y) { this->x = x; this->y = y; } 
	friend ostream& operator << (ostream& op1, Point& op2);
	friend istream& operator >> (istream& op1, Point& op2);
};

ostream& operator <<(ostream& op1, Point& op2) {
	op1 << "(" << op2.x << ", " << op2.y << ")" << endl;
	return op1;
}

istream& operator >>(istream& op1, Point& op2) {
	cout << "x=";
	op1 >> op2.x;
	cout << "y=";
	op1 >> op2.y;
	return op1;
}

void show(string x) {
	cout << "hello" << endl;
}

void print(string x) {
	cout << "hello2" << endl;
}

int main() {
	int n;
	void (*f)(string); //선언문
	
	f = show;
	f("Hello");
}
