#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void read(ifstream& fin, vector<string>& wordVec) {
	int count = 0;
	string line;
	while (getline(fin, line)) {
		wordVec.push_back(line);
		count++;
	}
	cout << "파일 읽기 완료 ... 라인:" << count << endl;
}

void echo(vector<string>& wordVec) {
	int no = 1;
	for (int i = 0; i < wordVec.size(); i++) {
		string line = wordVec[i];
		cout << no << ":\t" << line << endl;
		no++;
	}
}

void search(vector<string>& wordVec, string word) {
	for (int i = 0; i < wordVec.size(); i++) {
		string line = wordVec[i];
		int index = line.find(word);
		if (index != -1)
			cout << line << endl;
	}
}

int main() {
	ifstream fin;

	fin.open("C:\\WorkSpace\\2026_s1_02_oop1\\week14\\words.txt");

	if (!fin) {
		cout << "파일 읽기 실패" << endl;
		exit(0);
	}

	vector<string> wordVec;
	read(fin, wordVec);

	fin.close();

	//echo(wordVec);

	while (true) {
		cout << "단어 입력>>";
		string word;
		cin >> word;
		search(wordVec, word);
	}
}