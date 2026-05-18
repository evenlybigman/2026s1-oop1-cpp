#ifndef PLATINUM_H // 중복 방지 선언
#define PLATINUM_H // PLATINUM_H 정의 시작

#include "abstractpoint.h" // 상속 받을 클래스의 헤더파일 가져오기

class Platinum : public AbstractPoint { // AbstractPoint를 public으로 상속받는 Platinum 함수 선언부
private: // 클래스 외부에서 접근 불가능 멤버 선언
	double bonusRatio; // 추가 적립률을 저장하는 변수 선언 (%)
	int standardAmount; // 추가 적립률의 기준 금액을 저장하는 변수 선언
public: // 클래스 외부에서 접근 가능한 멤버 선언
	Platinum(string name, int ratio, int standardAmount, double bonusRatio);
	// 고객의 이름, 적립률, 추가 적립률 기준금액, 추가 적립률을 매개변수로 받아 저장하는 생성자 함수
	void earn(int pay); // 상속받은 earn 함수 오버라이딩
	void show(); // 상속받은 void 함수 오버라이딩
	void combine(Platinum& other); // other의 모든 포인트를 자신의 객체에 넘겨주는 함수 (other의 포인트는 0이됨)
	void resetPoint(); // 포인트를 0으로 만드는 함수
};

#endif // PLATINUM_H 정의 끝