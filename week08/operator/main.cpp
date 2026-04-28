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
	bool operator == (Power op2);
	Power& operator += (Power op2);
	Power& operator ++ (); //전위 연산자
	Power operator ++(int n); //후위 연산자 
	Power& operator = (int op2);
	friend Power operator + (int op1, Power op2);
	friend Power operator + (Power op1, Power op2);
	bool operator ! ();
	void show();
};

Power operator + (int op1, Power op2) {
	Power tmp;
	tmp.punch = op1 + op2.punch;
	tmp.kick = op1 + op2.kick;

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

bool Power::operator ! () {
	if (punch == 0 && kick == 0) return true;
	else false;
}

Power& Power::operator ++ () { //전위 연산자
	punch++;
	kick++;
	return *this;
}

Power Power::operator ++ (int n) { //전위 연산자
	Power tmp = *this;
	punch++;
	kick++;
	return tmp;
}

Power& Power::operator = (int op2) {
	punch = op2;
	kick = op2;
	return *this;
}

void Power::show() {
	cout << "punch=" << punch << "\t" << "kick=" << kick << endl;
}

Power operator + (Power a, Power b) {
	Power tmp;
	tmp.punch = a.punch + b.punch;
	tmp.kick = a.kick + b.kick;
	return tmp;
}

int main() {
	int n = 2 + 3;
	Power a(2, 3), b(20, 30), c;
	c = a + b + c; // a.+(b), +(a,b)
	a.show();
	b.show();
	c.show();

	if (a == b) cout << "equals" << endl;
	else cout << "not equals" << endl;

	(a += b) += c; // a.+=(b);
	a.show();
	b.show();
	c.show();

	c = a + 2; // a.+(2)
	a.show();
	c.show();

	a = 0;
	b = 0;
	c = 0;
	if (!Power(0,0)) { // a.!()
		cout << "Power 없음" << endl;
	}
	else
		a.show();
	b = ++a; // a.++();

	++++a;
	//a.show();

	++a = Power(2, 3);

	b = 1;
	a.show();
	b.show();

	b = a++; // a.++(0):
	a.show();
	b.show();

	c = 2 + a; // 2.+(a), +(2,a)
	a.show();
	c.show();
}