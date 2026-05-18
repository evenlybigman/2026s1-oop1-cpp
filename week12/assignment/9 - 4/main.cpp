#include <iostream> // 표준 입출력 라이브러리 가져오기
#include <string> // string 클래스 가져오기
#include "abstractpoint.h" // abstractpoint.h 헤더파일 가져오기
#include "platinum.h" // platinum.h 헤더파일 가져오기

int main() {
	Platinum hwang("황기태", 5, 100000, 7), park("박채원", 5, 100000, 7);
	// 생성자 의미 : 100,000원까지는 5%, 그 보다 큰 경우 7%

	hwang.earn(50000); // 50,000원 지출 경우, 2500 포인트 적립
	hwang.earn(200000); // 200,000원 지출 경우, 14000 포인트 적립
	park.earn(500000); // 500,000원 지출 경우, 3500 포인트 적립
	hwang.show(); park.show(); // 누적 포인트 출력

	hwang.combine(park); // hwang 회원에 park의 포인트 결합
	hwang.show(); park.show(); // 현재 누적 포인트 출력
}