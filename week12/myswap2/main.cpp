#include <iostream>
#include <string>
using namespace std;

template <typename T>
void myswap(T& op1, T& op2) {
	T tmp;
	tmp = op1;
	op1 = op2;
	op2 = tmp;
}

int main() {
	int a = 4, b = 5;
	double c = 6.7, d = 8.9;
	string x = "hello", y = "yoo";

	myswap(a, b);
	cout << a << ", " << b << endl;

	myswap(c, d);
	cout << c << ", " << d << endl;

	myswap(x, y);
	cout << x << ", " << y << endl;

	return 0;
}