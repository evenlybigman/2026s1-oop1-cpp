#include <iostream>
#include <fstream>
using namespace std;

void write() {
	ofstream fout;
	fout.open("c:\\temp\\student.txt", ios::out | ios::app); // ofstream 객체 생성 ....student.txt 파일 열기

	if (!fout) {
		cout << "열기 실패" << endl;
		exit(1);
	}

	char name[100], dept[100];
	int id;

	cout << "이름>>";
	cin >> name;
	cout << "학번>>";
	cin >> id;
	cout << "학과>>";
	cin >> dept;

	fout << name << endl;
	fout << id << endl;
	fout << dept << endl;

	fout.close();
}

void read() {
	ifstream fin;
	fin.open("c:\\temp\\student.txt");

	if (!fin) {
		cout << "열기 실패" << endl;
		exit(1);
	}

	char name[100], dept[100];
	int id;

	name[0] = '\0';
	dept[0] = '\0';
	id = 0;
	fin >> name >> dept >> id;

}

int main() {
	write();
}