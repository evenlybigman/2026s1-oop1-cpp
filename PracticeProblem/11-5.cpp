#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout << "Number         Square         Square Root    " << endl;

	for (int i = 0; i <= 45; i = i + 5) {
		double x = i;
		cout.fill('_');
		cout.width(15);
		cout << left << i;

		cout.fill('_');
		cout.width(15);
		cout << left << i*i;

		cout.fill('_');
		cout.width(15);
		cout.precision(3);
		cout << left << sqrt(i);
		
		cout << endl;
	}
}