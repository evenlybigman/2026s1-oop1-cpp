#include <iostream>
#include <cctype>
using namespace std;

int main() {

	for (int i = 0; i < 4; i++) {
		cout << "dec   hexa   char   ";
	}

	cout << endl;

	for (int i = 0; i < 4; i++) {
		cout << "---   ----   ----   ";
	}

	cout << endl;

	for (int i = 0; i <= 127; i++) {
		char ch = i;
		
		cout.width(6);
		cout << left << dec << i;

		cout.width(7);
		cout << left << hex << i;

		cout.width(7);

		if (isprint(i))
			cout << left << ch;
		else
			cout << left << ".";

		if (i > 0 && (i+1) % 4 == 0)
			cout << endl;
	}
}