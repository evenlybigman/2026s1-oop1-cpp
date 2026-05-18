#include <iostream>
#include <string>
using namespace std;

template <class T>
class Stack {
	int top;
	T data[100];
public:
	Stack();
	void push(T element);
	T pop();
};

template <class T>
Stack<T>::Stack() {
	top = -1; // top은 스택의 가장 최근에 저장된 데이터의 인덱스를 가리킨다.
}

template <class T>
void Stack<T>::push(T element) {
	if (top == 99) { // full
		cout << "full" << endl;
		return;
	}
	top++;
	data[top] = element;
}

template <class T>
T Stack<T>::pop() {
	if (top == -1) {
		cout << "empty" << endl;
		return 0;
	}
	return data[top--];
}

int main() {
	Stack<int> iStack;
	iStack.push(3);
	cout << iStack.pop() << endl;

	Stack<double> dStack;
	dStack.push(3.5);
	cout << dStack.pop() << endl;

	Stack<string> sStack;
	sStack.push("여러분");
	sStack.push("어떻게 사는지");
	sStack.push("궁금해요");
	sStack.push("공부 잘하고 있겠죠?");

	cout << sStack.pop() << endl;
	cout << sStack.pop() << endl;
	cout << sStack.pop() << endl;
	cout << sStack.pop() << endl;
}