#include <iostream>
using namespace std;

struct Circle { // C++ 구조체 선언
private:
	int radius; // 멤버 변수
public:
	Circle(int r) { radius = r; } // 구조체의 생성자
	double getArea(); // 멤버 함수
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle waffle(3); // 객체 생성. struct Circle waffle(3)으로 하면 안 됨
	cout << "면적은 " << waffle.getArea();
}