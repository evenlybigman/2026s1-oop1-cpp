#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char words[80];
	char longest[80] = "";
	int count = 1;
	int maxLen = 0;
	int maxLine = 0;
	cout << "최대 79글자까지 입력 가능합니다." << endl;
	cout << count << ":\t";
	while (cin.getline(words,80)) {

		int len = cin.gcount() - 1;

		if (len > maxLen) {
			maxLen = len;
			maxLine = count;
			strcpy(longest, words);
		}

		count++;
		cout << count << ":\t";
	}

	cout << "가장 긴 문장은 라인 " << maxLine << ": " << longest << endl;
}

