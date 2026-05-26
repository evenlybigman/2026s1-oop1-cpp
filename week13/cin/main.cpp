#include <iostream>
using namespace std;

void f() {
	cout << "입력하세오>>";
	cout.write("1: ", 3);
	int ch;
	int n = 1;
	while ((ch = cin.get()) != EOF) { //EOF end of file
		cout.put(ch);
		if (ch == '\n') {
			n++;
			cout << n << ": ";
		}
	}
}

void f2() {
	cout << "입력하세요 >>";
	char ch;
	while (true) {
		cin.get(ch);

		if (cin.eof()) break;
		cout.put(ch);

		if (ch == '\n') break;
	}
}

int main() {
	f2();
}