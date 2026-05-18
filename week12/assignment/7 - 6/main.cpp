#include <iostream> // 표준 입출력 라이브러리 가져오기
#include "light.h" // light.h 헤더파일 가져오기
using namespace std; // std 이름공간 선언 생략

int main() { // 메인 함수
	Light a(10), b(20), c, d(0); // c는 1, d의 크기는 0
	(a += b) += 10; // 빛 a에 b를 더하면 b는 크기를 잃고 0이 된다.
	~a; ~b; ~c; // 빛 a, b, c의 크기 출력
	d = c--; // d의 빛 크기는 1이 되고 c의 빛 크기 1 감소, 0이 됨
	~d; // 빛 d의 크기 출력
	if (c == 0) cout << "빛 c는 꺼져 있습니다." << endl; // c의 빛의 크기가 0이면 꺼져있음 출력
	if (d == 0) cout << "빛 d는 꺼져 있습니다." << endl; // d의 빛의 크기가 0이면 꺼져있음 출력
}
