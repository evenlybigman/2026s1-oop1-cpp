#include <iostream> // 표준 입출력 라이브러리 가져오기
#include <string> // string 클래스 가져오기
#include "abstractpoint.h" // abstractpoint.h 헤더파일 가져오기
#include "platinum.h" // platinum.h 헤더파일 가져오기
using namespace std; // std 이름공간 선언 생략

Platinum::Platinum(string name, int ratio, int standardAmount, double bonusRatio) : AbstractPoint(name, ratio) {
	// 부모 생성자에게 이름과 적립률을 넘겨준뒤 실행되는 Platinum 생성자 함수
	this->standardAmount = standardAmount; // 추가 적립률 기준 금액 초기화
	this->bonusRatio = bonusRatio; // 추가 적립률 초기화
}

void Platinum::earn(int pay) { // pay와 적립률을 이용해 포인트를 누적하는 오버라이딩 함수
	if (pay > standardAmount) point += pay * bonusRatio / 100; // 기준 금액 초과면 추가 적립률로 포인트 적립
	else point += pay * ratio / 100; // 기준 금액 이하면 기존 적립률로 포인트 적립
}

void Platinum::show() { // 고객의 이름과 포인트 출력하는 오버라이딩 함수
	cout << name << "님*** 적립 포인트는 " << point << "점입니다." << endl; // 이름과 포인트 출력
}

void Platinum::combine(Platinum& other) { // other의 포인트를 결합하는 함수
	point += other.getPoint(); //other의 포인트 값 더하기
	other.resetPoint(); // other의 포인트 0으로 초기화
}

void Platinum::resetPoint() { // 포인트를 0으로 초기화 하는 함수
	point = 0; // 포인트를 0으로 초기화
}