#include <iostream>
using namespace std;

bool equals(string x, string y, int size = 0, string z = "") {
	if (size == 0) return x == y;
	if (x.substr(0, size) == y.substr(0, size)) return 1;
	else return 0;
}

int main() {
	string x = "Prof. Hwang";
	string y = "Prof. Kim";
	string z = "Prof. Lee";
	if (equals(x, y)) cout << "같음" << endl;
	if (equals(x, y, 3)) cout << "앞 3글자 같음" << endl;
	if (equals(x, y, 5, z)) cout << "앞 5글자 같음" << endl;
}