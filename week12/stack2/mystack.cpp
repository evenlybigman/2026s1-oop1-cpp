#include <iostream>
using namespace std;

template <class T>
class myStack {
	T data[100];
	int top;
public:
	myStack();
	void push(T element);
	T pop();
};

template <class T>
myStack<T>::myStack() {
	top = -1;
}

template <class T>
void myStack<T>::push(T element) {
	if (top == 99) return;
	data[++top] = element;
}

template <class T>
T myStack<T>::pop() {
	if (top == -1) return 0;
	return data[top--];
}