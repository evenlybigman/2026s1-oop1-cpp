#include <iostream>
using namespace std;

int main() {
	int x, result;
	cout << "정수를 입력하세요>>";
	cin >> x;
	result = x / 10;
	result %= 10;
	cout << "245의 10자리 수는 " << result << "입니다.";
}