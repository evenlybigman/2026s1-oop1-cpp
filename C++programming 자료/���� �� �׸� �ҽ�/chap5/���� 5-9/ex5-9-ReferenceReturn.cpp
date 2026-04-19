#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius) { this->radius = radius; }
	Circle& plus(int n) {
		radius += n; // 반지름에 n을 더함
		return *this; // 현재 객체(*this)에 대한 참조 리턴
	}
	int getRadius() { return radius; }
};

int main() {
	Circle a(5); // 반지름이 5인 Circle 객체
	a.plus(1).plus(2).plus(3); // 객체 a의 radius에 1, 2, 3을 순차적으로 더함
	cout << "객체 a의 반지름은 " << a.getRadius(); // 11 출력
}