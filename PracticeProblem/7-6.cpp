//매개변수 이름 other로 쓰기, const, 참조 가능한건 사용하기
#include <iostream>
using namespace std;

class Light {
	int size;
public:
	Light(int size = 1);
	Light& operator += (Light& other);
	Light& operator += (int other);
	void operator ~ ();
	Light operator -- (int x);
	bool operator == (int other);
};

Light::Light(int size) {
	this->size = size;
}

Light& Light::operator += (Light& other) {
	size += other.size;
	other.size = 0;
	return *this;
}

Light& Light::operator += (int other) {
	size += other;
	return *this;
}

void Light::operator ~ () {
	cout << "빛 크기 " << size << endl;
}

Light Light::operator -- (int x) {
	Light tmp = *this;
	size--;
	return tmp;
}

bool Light::operator == (int other) {
	if (size == other) return true;
	else return false;
}

int main() {
	Light a(10), b(20), c, d(0); // c는 1, d의 크기는 0
	(a += b) += 10; // 빛 a에 b를 더하면 b는 크기를 잃고 0이 된다.
	~a; ~b; ~c; //빛 a, b, c의 크기 출력
	d = c--; // d의 빛 크기는 1이 되고 c의 빛 크기 1 감소, 0이 됨
	~d;
	if (c == 0) cout << "빛 c는 꺼져 있습니다." << endl;
	if (d == 0) cout << "빛 d는 꺼져 있습니다." << endl;
}