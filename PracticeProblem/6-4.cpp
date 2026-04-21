#include <iostream>
using namespace std;

string erase(string text) { //replace(index,갯수,"바꿀문자"); find 첫번째 인덱스 반환
	string result;
	for (int i = 0; text[i] !='\0'; i++) {
		while (text[i] == ' ') {
			i++;
		}
		result += text[i];
		if (text[i] == '\0') {
			result[i] = '\0';
		}
	}
	return result;
}

string erase(string text, string findword, string replaceword) { //단어를 복사하는데 replaceword를 만나면 지운다
	int replacesize = replaceword.size();
	int idx = 0;

}

int main() {
	string a = erase("Hello    world,   Yaho");
	cout << "모든 빈 칸 지운 결과\t" << a << endl;
	//string b = erase("Hello    world,   Yaho", "ll");
	//cout << "모든 11을 지운 결과\t" << b << endl;
	string c = erase("Hello    world,   Yaho", "o", "77");
	cout << "모든 o를 77로 바꾼 결과\t" << c << endl;
}