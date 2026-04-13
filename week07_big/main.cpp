#include <iostream>
using namespace std;

int big(int x, int y) {
	if (x > y) return x;
	else return y;
}

int big(int array[],int size) {
	int result = array[0];
	for (int i = 0; i < size; i++) {
		if (result < array[i]) result = array[i];
	}
	return result;
}

int main() {
	cout << big(2, 3) << endl;
	int array[5] = { 1, 9, -2, 8, 6 };
	cout << big(array, 5) << endl;
}