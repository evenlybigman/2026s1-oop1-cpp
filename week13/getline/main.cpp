#include <iostream>
using namespace std;

int main() {
	while (true) {
		cout << "암호>>";
		char pw[80];
		cin.getline(pw, 80, '\n');
		if (strcmp(pw, "Good Morning") == 0) {
			cout << "통과" << endl;
			break;
		}
	}
}