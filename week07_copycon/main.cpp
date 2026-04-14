#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int radius) {
		this->radius = radius; }
	Circle(const Circle& src); // 디폴트 복사 생성자가 컴파일러에 의해 삽입되었다.
	int getRadius() { return radius; }
	double getArea() { return 3.14 * radius * radius; }
};

//디폴트 복사 생성자
Circle::Circle(const Circle& c) {
	this->radius = c.radius;
}

int main() {
	Circle src(30);
	Circle dest(src); //src랑 똑같은 dest라는 객체를 만들어줘

	cout << src.getArea() << endl;
	cout << dest.getArea() << endl;
}