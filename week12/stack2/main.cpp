#include <iostream>
using namespace std;

#include "mystack.cpp"

int main() {
	myStack<int> iStack;
	iStack.push(10);
	iStack.push(20);
	iStack.push(30.5);

	for (int i = 0; i < 3; i++) {
		cout << iStack.pop() << endl;
	}

	myStack<string> sStack;
	sStack.push("I");
	sStack.push("love you");
	for (int i = 0; i < 3; i++) {
		cout << sStack.pop() << endl;
	}
}