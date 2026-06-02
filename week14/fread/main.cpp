#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin;
	fin.open("c:\\windows\\system.ini");

	if (!fin) {
		cout << "파일 열기 실패" << endl;
		exit(1);
	}

	int ch;
	int count = 0;
	while ((ch = fin.get()) != EOF) {
		cout.put(ch);
		count++;
	}
	cout << endl;
	cout << "파일은 " << count << "바이트 입니다." << endl;
	fin.close();
}