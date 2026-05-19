#include <iostream>
#include <map>
using namespace std;

int main() {
	map <string, string> dic;

	dic.insert(make_pair("love", "사랑"));
	dic["apple"] = "사과";
	dic["cherry"] = "체리";
	
	cout << "저장된 단어의 개수: " << dic.size() << endl;
	while (true) {
		string eng;
		cout << "영단어 입력: ";
		cin >> eng;
		if (eng == "exit") break;
		if (dic.find(eng) == dic.end()) cout << "없음" << endl;
		else {
			string kor = dic[eng];
			cout << kor << endl;
		}
	}
}