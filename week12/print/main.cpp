#include <iostream>
using namespace std;

template <class X>
void print(X array[], int size) {
	for (int i = 0; i < size; i++)
		cout << array[i] << "\t";

	cout << endl;
}

void print(char array[], int size) {
	for (int i = 0; i < size; i++)
		cout << (int)array[i] << "\t";

	cout << endl;
}

int main() {
	int x[] = { 1, 2, 3, 4, 5 };
	double d[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };

	print(x, 5);
	print(d, 5);
	
	char c[] = { 1, 2, 3, 4, 5 };
	
	print(c, 5);

}