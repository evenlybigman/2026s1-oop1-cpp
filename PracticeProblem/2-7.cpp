#include <iostream>
#include <string>
using namespace std;

int main() {
	char buf[100];
	while (1) {
		if (strcmp(buf, "OK") == 0) {
			cout << "종료합니다.";
			break;
		}
		cout << "끝내려면 OK를 입력하세요>>";
		cin.getline(buf, 100);
	}
}