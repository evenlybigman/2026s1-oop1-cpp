#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
	ifstream fin;
	fin.open("c:\\windows\\system.ini");

	if (!fin) {
		cout << "파일 열기 실패" << endl;
		exit(1);
	}


	//파일을 읽는 3가지 방법
	 
	int ch;
	int count = 0;
	while ((ch = fin.get()) != EOF) {
		cout.put(ch);
		count++;
	}
	
	char buf[100];
	while (fin.getline(buf, 100)) {
		cout << buf << endl;
	}

	string buf;
	while (getline(fin, buf)) {
		cout << buf << endl; 
	}

	cout << endl;
	fin.close();
}