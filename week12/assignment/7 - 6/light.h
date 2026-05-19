#ifndef LIGHT_H // light.h가 정의된적 없다면 포함
#define LIGHT_H // light_h 정의 시작

class Light { // Light 클래스 선언부
	int brightness; // 빛의 크기를 나타내는 변수 선언
public: // 클래스 외부에서 접근 허용
	Light(int brightness = 1) { this->brightness = brightness; } // 밝기를 매개변수로 받아 밝기를 저장하는 생성자
	Light& operator += (Light& op2); // Light 객체를 매개변수로 하는 += 연산자 오버로딩
	Light& operator += (const int op2); // 정수값을 매개변수로 하는 += 연산자 오버로딩
	void operator ~ () const; // 빛의 크기를 출력하는 ~ 연산자 오버로딩
	Light& operator = (const Light& op2); // Light 객체를 매개변수로 하는 = 오버로딩
	Light operator -- (int x); // -- 후위 연산자 오버로딩
	bool operator == (const int op2) const; // op2와 빛의 크기를 비교하는 bool 타입 == 연산자 오버로딩 
};

#endif // light_h의 끝 정의