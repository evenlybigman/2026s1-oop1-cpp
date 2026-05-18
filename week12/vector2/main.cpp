#include <iostream>
#include <vector>
#include <string>
using namespace std;

void showAll(vector<string>& sv) {
	for (int i = 0; i < sv.size(); i++) {
		cout << sv.at(i) << " ";
	}
	cout << endl;
}

int main() {
	vector<string> sv;
	string name;
	cout << "이름을 5개 입력하세요" << endl;
	for (int i = 0; i < 5; i++) {
		cout << i+1 << ">>";
		cin >> name;
		sv.push_back(name);
	}
	
	showAll(sv);

	name = sv.at(0);
	for (int i = 0; i < sv.size(); i++) {
		if (name < sv[i])
			name = sv[i];
	}

	cout << "사전에서 제일 뒤에 나오는 단어는 " << name << endl;
}