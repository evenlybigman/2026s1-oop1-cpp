#include <iostream>
using namespace std;

class Power {
	int punch;
	int kick;
public:
	Power(int punch = 0, int kick = 0) {
		this->punch = punch;
		this->kick = kick;
	}
	Power operator +(Power& op2);
	bool operator == (Power op2);
	Power& operator += (Power op2);
	void show();
};

Power Power::operator + (Power& op2) {
	Power tmp;
	tmp.punch = punch + op2.punch;
	tmp.kick = kick + op2.kick;
	return tmp;
}

bool Power::operator== (Power op2) {
	if (punch == op2.punch && kick == op2.kick) return true;
	else return false;
}

Power& Power::operator += (Power op2) {
	punch += op2.punch;
	kick += op2.kick;

	return *this;
}

void Power::show() {
	cout << "punch=" << punch << "\t" << "kick=" << kick << endl;
}

int main() {
	int n = 2 + 3;
	Power a(2, 3), b(20, 30), c;
	c = a + b + c; // a.+(b)
	a.show();
	b.show();
	c.show();

	if (a == b) cout << "equals" << endl;
	else cout << "not equals" << endl;

	(a += b) += c; // a.+=(b);
	a.show();
	b.show();
	c.show();
}