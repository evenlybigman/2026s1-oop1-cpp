#include <iostream>
#include <fstream>
using namespace std;

int main() {
	//이름 학번 학과 받아서 파일에 저장
	char name[100], dept[100];
	int id;

	ofstream fout("c:\\temp\\student.txt"); // ofstream 객체 생성 ....student.txt 파일 열기
	if (!fout) {
		cout << "열기 실패" << endl;
		return 0;
	}

	cout << "이름>>";
	cin >> name;
	cout << "학번>>";
	cin >> id;
	cout << "학과>>";
	cin >> dept;

	fout << "이름: " << name << endl;
	fout << "학번: " << id << endl;
	fout << "학과: " << dept << endl;

	fout.close();
}