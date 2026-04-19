#include <iostream>
#include <string>
using namespace std;

int main() {
	string line; // 입력받아 저장할 스트링 객체
	string dest; // 목적하는 문자열을 저장할 스트링 객체

	cout << "텍스트 입력>>";
	getline(cin, line, '\n'); // <Enter> 키가 입력될 때까지 문자를 읽고 한 줄에 해석. 
						// <Enter> 키를제외하고 한 라인 입력
	int index = 0;
	while (true) {
		if (index >= line.size()) // 텍스트 길이보다 크면 종료
			break;

		if (line[index] == ' ') { // ' ' 문자 이면
			dest.append(1, line[index]); // ' ' 문자 저장
			index++; // 다음 문자로 이동

			while (line[index] == ' ') // 뒤이어 나오는 ' ' 문자 모두 무시 
				index++; 
		}
		else { // ' ' 문자가 아니면
			dest.append(1, line[index]); // 문자 저장
			index++; // 다음 문자로 이동
		}
	}
	cout << dest;
}