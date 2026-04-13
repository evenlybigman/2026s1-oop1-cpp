#include <iostream>
#include <string>
using namespace std;

void star(int n=5) {
	for (int i = 0; i < n; i++) cout << '*';
	cout << endl;
}

void msg(int id, string text="") {
	cout << id << text << endl;
}
int main() {
	star(10);
	star();

	msg(10, "Hello");
	msg(10);
}