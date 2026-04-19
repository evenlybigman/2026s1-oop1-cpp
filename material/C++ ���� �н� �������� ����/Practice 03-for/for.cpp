#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "정수 입력>>";
	cin >> a;

	for(int i=0; i<a; i++) {
		for(int j=0; j<a-i; j++) {
			cout << '*';
		}
		cout << "\n";
	}
} 