#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char line[100]; // 영문 99개의 글자까지 가능한 문자열 저장
	cout << "문자열을 입력하세요>>";
	cin.getline(line, 100, '\n'); // 한 라인 읽기
	int count = 0; // 문자 'e' 개수 저장
	int i = 0; // 배열의 인덱스
	while (line[i] != '\0') { // 널 문자를 만날 때까지 반복
		if (line[i] == 'e')
			count++; // 카운트 증가
		i++; // 다음 문자에 대한 인덱스
	}
	cout << "총글자수 " << i << ", 문자 e의 개수는 " << count << "개" << endl;
	printf("This code is on line %d, in file %s\n", __LINE__, __FILE__);
}