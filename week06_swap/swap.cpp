#include <iostream>
using namespace std;

void swap(int* swapA, int* swapB) {
	int tmp;
	tmp = *swapA;
	*swapA = *swapB;
	*swapB = tmp;
}

int main() {
	int m, n;

	cout << "A의 값 입력: ";
	cin >> m;
	cout << "B의 값 입력: ";
	cin >> n;
	swap(&m, &n);
	cout << m << "\t" << n << endl;
	return 0;
}