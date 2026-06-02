#include <iostream>
using namespace std;

template<typename T>
void print(const T& start,const  T& end) {
	T val = start;
	for (val = start; val <= end; val++) {
		cout << val << ' ';
	}
	cout << endl;
}

int main() {
	print(500, 507);
	print(3.5, 6.5);
	print('b', 'y');
	return 0;
}