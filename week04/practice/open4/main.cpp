#include <iostream>
using namespace std;

#include "Exp.h"

int main() {
	Exp a(3, 2); //3^2 = 9, 베이스 3, 지수 2
	Exp b(9); // 9^1 = 9, 베이스 9, 지수 1
	Exp c; // 1^1, 베이스 1, 지수 1

	cout << a.getValue() << ' ';
	cout << b.getValue() << ' ';
	cout << c.getValue() << endl;

	cout << "a의 베이스" << a.getBase() << ' ';
	cout << "a의 지수" << a.getExp() << endl;

	if (a.equals(Exp(3,2)))
		cout << "same" << endl;
	else
		cout << "not same" << endl;
}