#ifndef ABSTRACTPOINT_H // 중복 방지 선언
#define ABSTRACTPOINT_H // ABSTRACTPOINT_H 정의 시작

#include <string> // 스트링 클래스 가져오기
using namespace std; // std 이름공간 선언 생략

class AbstractPoint { // AbstractPoint 클래스 선언부
protected: // 상속 관계에서 접근 가능한 멤버 선언
	string name;  // 이름값 저장하는 변수
	int point = 0; // 포인트 값을 저장하는 변수
	int ratio; // 적립률을 지정하는 변수 (%)
public: // 클래스 외부에서 접근 가능한 멤버 선언
	AbstractPoint(string name, int ratio = 1); // 이름과 적립률을 받는 생성자 함수
	virtual void earn(int pay) = 0; // 가상 함수
	virtual void show() = 0; // 고객의 이름과 포인트를 출력하는 함수
	int getPoint(); // 포인트를 리턴하는 함수
};

#endif // ABSTRACTPOINT_H 정의 끝