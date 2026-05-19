#include <iostream>
#include <string>
using namespace std;

template <class T>
T bigger(const T& op1, const T& op2) {
	if (op1 > op2) return op1;
	else return op2;
}


int main() {
	int a = 20, b = 50;
	char c = 'a', d = 'z';
	string e = "hello", f = "yoo";
	cout << "bigger(20, 50)의 결과는 " << bigger(a, b) << endl;
	cout << "bigger('a','z')의 결과는 " << bigger(c, d) << endl;
	cout << "bigger('hello','yoo')의 결과는 " << bigger(string("hello"), string("yoo")) << endl;
	cout << "bigger('hello','yoo')의 결과는 " << bigger(e, f) << endl;
}