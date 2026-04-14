#include <iostream>
#include <string>
using namespace std;

int main() {
	string cmpX, cmpY;
	cout << "첫 번째 문자열을 입력하세요>>";
	cin >> cmpX;
	cout << "두 번째 문자열을 입력하세요>>";
	cin >> cmpY;
	if (cmpX == cmpY)
		cout << "Yes";
	else cout << "No";
}