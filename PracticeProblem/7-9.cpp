// const, 참조 가능하면 쓰기
#include <iostream>
using namespace std;

class Chart {
	int size;
	int idx;
	int* p = NULL;
public:
	Chart(int size = 0);
	bool operator !();
	Chart& operator << (const int data);
	int operator ~ () const;
	void show();
};

Chart::Chart(int size) {
	this->size = size;
	p = new int[this->size];
	idx = 0;
}

bool Chart::operator !() {
	if (idx == 0) return true;
	else return false;
}

Chart& Chart::operator << (const int data) {
	if (idx < size) 
		p[idx++] = data;
	return *this;
}

int Chart::operator ~ () const {
	int avg = 0;
	for (int i = 0; i < idx; i++) {
		avg += p[i];
	}
	return avg / idx;
}

void Chart::show() {
	cout << "차트 데이터: ";
	for (int i = 0; i < idx; i++) cout << p[i] << ' ';
	cout << endl;
}

int main() {
	Chart chart(100); // 100개의 정수 저장이 가능한 차트 객체
	if (!chart) cout << "차트가 비었습니다." << endl;

	int n;
	cout << "정수 4개 입력>>";
	for (int i = 0; i < 4; i++) {
		cin >> n; // 정수 입력
		chart << n; // chart에 입력받은 정수 저장
	}
	int avg = ~chart; // chart 데이터의 평균 값 리턴
	cout << "평균은 " << avg << endl;
	chart.show(); // 현재 저장된 차트 데이터 출력
}