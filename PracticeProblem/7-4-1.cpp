#include <iostream>
using namespace std;

class Coffee {
	int water, espresso, sugar, cream;
public:
	Coffee(int water = 1, int coffee = 1, int sugar = 0, int cream = 0) {
		this->water = water; this->espresso = coffee;
		this->sugar = sugar; this->cream = cream;
	}
	void show() {
		cout << "물 " << water << ", 커피 " << espresso;
		cout << ", 설탕 " << sugar << ", 크림 " << cream << endl;
	}
	Coffee& operator <<(const Coffee& op2);
	Coffee& operator <<(int op2);
};

Coffee& Coffee:: operator << (const Coffee& op2) {
	water += op2.water; espresso += op2.espresso;
	sugar += op2.sugar; cream += op2.cream;
	return *this;
}

Coffee& Coffee::operator << (int op2) {
	water += op2;
	return *this;
}

int main() {
	Coffee a(2, 5, 0, 0), b(2, 2, 2, 2);
	a << b << 3;
	a.show();
}