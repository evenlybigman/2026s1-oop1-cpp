#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int main() {
	string words;
	string longest;
	int count = 1;
	int maxLen = 0;
	int maxLine = 0;
	cout << "최대 79글자까지 입력 가능합니다." << endl;
	cout << count << ":\t";
	while (getline(cin,words)) {

		int len = words.size();

		if (len > maxLen) {
			maxLen = len;
			maxLine = count;
			longest = words;
		}

		count++;
		cout << count << ":\t";
	}

	cout << "가장 긴 문장은 라인 " << maxLine << ": " << longest << endl;
}

