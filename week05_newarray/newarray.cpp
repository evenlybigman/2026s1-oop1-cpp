#include <iostream>
using namespace std;



int main() {
	int n;
	int* p;
	cout << "몇개 입력>>";
	cin >> n;
	p = new int[n];
	if (p == NULL) {
		cout << "할당 실패";
		return 0; // exit(0) 프로그램 종료 방법
	}
	for (int i = 0; i < n; i++) {
		cout << (i + 1) << "번째 정수 : ";
		cin >> p[i]; // *(p+i) 
	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += p[i];
	}
	cout << "정수들의 평균은" << sum / n;
	delete[] p;
	delete[] new int;
	return 0;
}