#include <iostream>
using namespace std;

int sum(int x, int y) {
	return x + y;
}

int sum(int end) {
	int sum = 0;
	for (int i = 0; i <= end; i++) {
		sum += i;
	}
	return sum;
}




int main() {
	cout << sum(3, 5) << endl;
	cout << sum(3) << endl;
	cout << sum(100) << endl;
}