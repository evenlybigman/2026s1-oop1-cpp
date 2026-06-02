#include <iostream>
using namespace std;

#define MAX_STACK_SIZE 99
#define MIN_STACK_SIZE 0

class AbstractStack {
public:
	virtual bool push(int n) = 0;
	virtual bool pop(int& n) = 0;

	virtual int size() = 0;
};

class iStack {
	int top = -1;
	int data[100];
public:
	bool push(int data);
	bool pop(int& data);
	
	int size();
};

bool iStack::push(int data) {
	if (top >= MAX_STACK_SIZE) return false;
	this->data[++top] = data;
	return true;
}

bool iStack::pop(int& data) {
	if (top < MIN_STACK_SIZE) return false;
	data = this->data[top--];
	return true;
}

int iStack::size() {
	return top + 1;
}

int main() {
	iStack is;
	int data1 = 1, data2 = 2;

	is.push(10);
	is.push(20);
	is.pop(data1);
	is.pop(data2);
	cout << data1 << endl;
	cout << data2 << endl;
}