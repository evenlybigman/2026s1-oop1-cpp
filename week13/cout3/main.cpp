#include <iostream>
using namespace std;

void show(string x) {
	cout << "hello" << endl;
}

void print(string x) {
	cout << "hello2" << endl;
}

int main() {
	int n;
	void (*f)(string); //선언문

	f = show;
	f("Hello");
}
