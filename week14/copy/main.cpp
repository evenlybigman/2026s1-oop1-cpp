#include <iostream>
#include <fstream>
using namespace std;

//이미지 파일 읽어서 복사하는 프로그램
int main() { // 소스파일 바이너리로 열고 쓰기 get -> put 반복
	ifstream fin;
	fin.open("C:\\WorkSpace\\2026_s1_02_oop1\\week14\\src.png",ios::binary);
	if (!fin) {
		cout << "파일 읽기 실패" << endl;
		exit(0);
	}

	ofstream fout("C:\\WorkSpace\\2026_s1_02_oop1\\week14\\dest.png",ios::binary);
	if (!fout) {
		cout << "목적 파일 열기 실패" << endl;
		exit(0);
	}


	//int ch;
	//while ((ch = fin.get()) != EOF) {
	//	fout.put(ch);
	//

	char buf[1024];
	while (!fin.eof()) {
		fin.read(buf,1024);
		int n = fin.gcount();
		fout.write(buf, n);
		if (n < 1024)
			break;
	}

	fin.close();
	fout.close();
}