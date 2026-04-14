#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	srand((unsigned)time(0));

	int wrong = 0;
	int result;
	int answer;
	cout << "*** 구구단 맞추기 퀴즈입니다. ***" << endl;
	while (1) {
		int n1 = rand() % 7, n2 = rand() % 7;
		cout << n1+2 << "x" << n2+2 << "=";
		cin >> answer;
		result = (n1+2) * (n2+2);
		if (answer == result) {
			cout << "정답입니다. 잘했습니다." << endl;
		}
		else wrong++;
		if (wrong == 1) {
			cout << "1번 틀렸습니다. 분발하세요." << endl;
		}
		if (wrong == 2) {
			cout << "2번 틀렸습니다. 분발하세요." << endl;
		}
		if (wrong == 3) {
			cout << "3번 틀렸습니다. 퀴즈 종료합니다." << endl;
			break;
		}
	}

}