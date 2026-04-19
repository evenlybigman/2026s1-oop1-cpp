#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	~Circle() {}
	void setRadius(int r) { radius = r; } // 원에 반지름 설정
	double getArea() { return 3.14 * radius * radius; }
};

class CircleManager {
	Circle* pArray = NULL; // 동적 생성한 Circle 배열에 대한 주소
	int size = 0; // 동적 생성한 Circle 배열의 크기
	void input(); // 각 Circle에 반지름 입력
	void decide(); // 배열에서 면적이 100과 200사이인 Circle 객체 찾아 출력
public:
	CircleManager(); //  생성자
	~CircleManager(); // 소멸자
	void run(); // Circle 배열을 관리하는 주 함수
};

CircleManager::CircleManager() { 
	cout << "생성하고자 하는 원의 개수?";
	cin >> size; // 원의 개수 입력
	if (size <= 0) return;
	pArray = new Circle[size]; // size 개의 Circle 배열 동적 생성
}

CircleManager::~CircleManager() {
	if (pArray != NULL) 
		delete[] pArray; // 동적 생성한 Circle 객체 배열 반환
}

void CircleManager::input() { 
	int radius;
	for (int i = 0; i < size; i++) { // size개 만큼 원의 반지름 입력
		cout << "원" << i + 1 << ": "; // 프롬프트 출력
		cin >> radius; // 반지름 입력
		pArray[i].setRadius(radius); // 각 Circle 객체를 반지름으로 초기화
	}
}

void CircleManager::decide() {
	int count = 0; // 면적이 100과 200사이인 원 개수
	Circle* p = pArray; // 배열의 시작 주소를 포인터 변수 p에 저장
	for (int i = 0; i < size; i++) {
		cout << p->getArea() << ' '; // 원의 면적 출력
		if (p->getArea() >= 100 && p->getArea() <= 200) // 면적 100~200 사이
			count++;
		p++; // 다음 원을 위해 포인터 증가
	}
	cout << endl << "면적이 100에서 200 사이인 원의 개수는 " << count << endl;
}

void CircleManager::run() {
	input(); // 각 Circle에 반지름 입력
	decide(); // 면적이 100과 200사이인 원을 찾아 출력
}

int main() {
	CircleManager* pMan = new CircleManager();
	pMan->run();
	delete pMan;
}