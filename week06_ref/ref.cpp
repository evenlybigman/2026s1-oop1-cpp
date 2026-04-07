#include <iostream>
using namespace std;

int main() {
	int m = 10;
	int n = 5;
	int* p = &n;
	int& ref = n;
	p = &ref;
	ref = m;
	cout << "n의 값: " << n << "\tref의 값: " << ref << "\tp의 값: " << *p << endl;
	ref++;
	cout << "ref 값 증가" << endl;
	cout << "n의 값: " << n << "\tref의 값: " << ref << "\tp의 값: " << *p << endl;
}