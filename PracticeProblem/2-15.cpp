/*
예문
When I am down and, oh, my soul, so weary
When troubles come and my heart burdened be
Then I am still and wait here in the silence
Until You come and sit awhile with me
You raise me up so I can stand on mountains
You raise me up to walk on stormy seas
I am strong when I am on Your shoulders
you raise me up to more than I can be ;
*/


#include <iostream>
#include <cmath>
using namespace std;

int main() {
	char histogram[10000];
	char list[52] = { 'a', 'b', 'c', 'd', 'e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v',
	'w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
	int countAlpha[52];
	int countText = 0;
	for (int i = 0; i < 52; i++) {
		countAlpha[i] = 0;
	}
	cout << "히스토그램을 그립니다. 텍스트의 끝은 ; 이고" << endl;
	cout << "10000개 문자까지 가능합니다. 영문 텍스트를 입력하세요." << endl;
	cin.getline(histogram, 10000);
	for (int i = 0; histogram[i] != ';'; i++) {
		for (int j = 0; j < 52; j++) {
			if (histogram[i] == list[j]) {
				countAlpha[j%26]++;
				countText++;
			}
		}
	}
	cout << "총 알파벳 수" << countText << endl;
	cout << endl << endl;
	for (int i = 0; i < 26; i++) {
		cout << list[i] << ' ' << '(' << countAlpha[i] << ") " << "\t : ";
		for (int j = 0; j < countAlpha[i]; j++) cout << "*";
		cout << endl;
	}
}