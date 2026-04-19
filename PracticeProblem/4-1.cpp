#include <iostream>
using namespace std;


//온도 5개를 저장할 배열을 동적 할당 받고 온도 5개를 입력받아 저장한다.
//그리고 배열의 평균을 출력한뒤 동적 메모리를 반환한다.
int main() {
	double temperature;
	double average = 0;
	cout << "동적 할당 받을 메모리 개수: ";
	cin >> temperature;
	double* p = new double[temperature];
	cout << temperature << "개의 온도 입력: ";
	for (int i = 0; i < temperature; i++) {
		cin >> p[i];
		average += p[i];
	}
	average /= temperature;
	cout << "평균은 " << average;
	delete[] p;
}