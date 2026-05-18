#include <iostream>
using namespace std;

template <typename T>
T bigger(const T op1, const T op2) {
	if (op1 > op2) return op1;
	else return op2;
}

int main() {
	int a = 20, b = 50;
	char c = 'a', d = 'z';

	cout << "bigger(20,50)의 결과는 " << bigger(a, b) << endl;
	cout << "bigger('a','z')의 결과는 " << bigger(c, d) << endl;
}