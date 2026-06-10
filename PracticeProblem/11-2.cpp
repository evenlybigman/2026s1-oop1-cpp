#include <iostream>
using namespace std;

int main() {
	char ch;
	int count = 0;

	while (true) {
		cin.get(ch);

		if (cin.eof() || ch == '\n')
			break;
		if (isdigit(ch))
			count++;
	}
	cout << "숫자는 모두 " << count << "개 입력됨" << endl;
}