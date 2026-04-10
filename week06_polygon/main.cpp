#include <iostream> //입출력 라이브러리 가져오기
#include "Polygon.h" //폴리곤 헤더파일 가져오기
using namespace std; //std 이름공간 지칭 생략

int main() {
	Polygon poly(6); //점이 6개인 다각형 poly 생성
	poly.read(); //poly의 점 좌표 x,y 입력
	int n = 3, x, y; //찾을 좌표의 값은 3번째 점, 찾을 x,y좌표 값 저장할 x,y변수 선언;
	bool res = poly.get(3, x, y); //찾으려는 n번째 점의 x,y값 받아오기 / bool타입으로 error 확인
	if (res == true) //오류가 없다면 실행
		cout << n << "번째 점은 " << "(" << x << ", " << y << ")" << endl; //찾은 x,y값 출력
	else //n이 음수거나 size보다 크다면 에러
		cout << "error"; //에러 출력
}