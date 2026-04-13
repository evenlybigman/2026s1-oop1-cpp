// 디폴트가 "", 1인 f함수를 만들어라

#include <iostream>
using namespace std;

void f(char text = '\0', int line = 1) {
	for (int i = 0; i < line; i++) {
		for (int j = 0; j < 10; j++) 
			cout << text;
		cout << endl;
	}
	return;
}

int main() {
	f(); // 한줄에 빈간을 10개 출력
	f('%'); //1줄에 % 10개 출력 
	f('@', 5); //5줄에 @ 10개 출력
}