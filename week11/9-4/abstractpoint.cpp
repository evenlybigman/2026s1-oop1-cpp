#include <iostream> // 표준 입출력 라이브러리 가져오기
#include <string> // string 클래스 가져오기
#include "abstractpoint.h" // abstractpoint.h 헤더파일 가져오기

AbstractPoint::AbstractPoint(string name, int ratio) { 
	// 이름과 적립률을 받아서 초기화 하는 생성자 함수
	this->name = name; // 이름 초기화
	this->ratio = ratio; // 적립률 초기화
}

int AbstractPoint::getPoint() { // private인 point를 리턴하는 함수
	return point; // point 리턴
}