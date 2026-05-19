#include <iostream> // 표준 입출력 라이브러리 가져오기
#include "light.h" // light.h 헤더파일 가져오기
using namespace std; // std 이름공간 선언 생략

Light& Light::operator += (Light& op2) { // Light 객체 op2를 매개변수로 하는 += 연산자 오버로딩
	brightness += op2.brightness; // 자신의 빛의 크기와 op2의 빛의 크기 더하기
	op2.brightness = 0; // op2의 밝기는 0이 됨
	return *this; // 자기자신 리턴
}

Light& Light::operator += (const int op2) { // 정수값 op2를 매개변수로 하는 += 연산자 오버로딩 
	brightness += op2; // 자신의 빛의 크기와 op2의 값 더하기
	return *this; // 자기자신 리턴
}

void Light::operator ~ () const { // 자신의 빛의 크기를 출력하는 ~ 연산자 오버로딩
	cout << "빛 크기 " << brightness << endl; // 자신의 빛의 크기 출력
}

Light& Light::operator = (const Light& op2) { // 자신의 빛의 크기에 Light 객체 op2의 크기를 대입하는 = 연산자 오버로딩
	brightness = op2.brightness; // 자신의 빛의 크기는 op2의 빛의 크기가 된다
	return *this; // 자기자신 리턴
}

Light Light::operator -- (int x) { // 자신의 값을 1 낮추고 낮추기 전 자신의 복사본 리턴하는 -- 후위 연산자 오버로딩
	Light tmp = *this; //복사본은 자신의 빛의 크기와 같다
	brightness--; //자기자신의 빛의 크기 1감소
	return tmp; // 복사본 리턴
}

bool Light::operator == (const int op2) const { // 자신과 Light 객체 op2의 빛의 크기를 비교하는 == 연산자 오버로딩
	if (brightness == op2) return true; // 빛의 크기가 같으면 true 리턴
	else return false; // 빛의 크기가 서로 다르면 false 리턴
}
