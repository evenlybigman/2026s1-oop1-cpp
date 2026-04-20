#include <iostream>
using namespace std;

bool equals(string x, string y) {
	if (x == y) return 1;
	else return 0;
}

bool equals(string x, string y,int size) {
	if (x.substr(0,3) == y.substr(0,3)) return 1;
	else return 0;
}

bool equals(string x, string y, int size, string z) {
	if (x.substr(0, 5) == y.substr(0, 5)) return 1;
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