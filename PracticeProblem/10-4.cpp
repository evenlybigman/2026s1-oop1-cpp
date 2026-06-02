#include <iostream>
using namespace std;

template <class T>
bool add(T array[], int size, int index, T value) {
	int count = 0;
	for (int i = 0; array[i] != '\0'; i++) {
		count++;
	}

	if (index > count) return false;
	array[index] = value;
	return true;
}

template<class T>
void print(T array, int size) {
	for (int i = 0; i < size; i++) {
		cout << array[i] << ' ';
	}
	cout << endl;
}

int main() {
	int intArray[10] = { 1, 2, 3, 4, 5 };
	bool ret = add(intArray, 10, 5, 20);

	if (ret == true) print(intArray, 6);
	else cout << "삽입 실패" << endl;

	char charArray[6] = { 'C', '+', '+' };
	ret = add(charArray, 6, 3, '!');

	if (ret == true) print(charArray, 4);
	else cout << "삽입 실패" << endl;
}