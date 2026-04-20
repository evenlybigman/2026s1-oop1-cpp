#include <iostream>
using namespace std;

class MyStack {
	int* p = NULL;
	int size = 0;
	int tos = 0;
public:
	MyStack(int size);
	MyStack(const MyStack& src);
	~MyStack();
	bool push(int n);
	bool pop(int& n);
};

MyStack::MyStack(int size = 10) {
	this->size = size;
	p = new int[size];
}

MyStack::MyStack(const MyStack& src) {
	this->size = src.size;
	p = new int[src.size];
	for (int i = 0; i < size; i++) {
		p[i] = src.p[i];
	}
}

MyStack::~MyStack() {
	delete[] p;
}

bool MyStack::push(int n) {
	if (tos >= 10) return false;
	else {
		p[tos++] = n;
		return true;
	}
}

bool MyStack::pop(int& n) {
	if (tos <= 0) return false;
	else {
		n = p[--tos];
		return true;
	}
}

int main() {
	MyStack a(10);
	a.push(10); a.push(20);

	MyStack b = a;
	b.push(30);

	int n;
	a.pop(n);
	cout << "스택 a에서 팝한 값 " << n << endl;
	b.pop(n);
	cout << "스택 b에서 팝한 값 " << n << endl;
}
