#ifndef POLYGON_H //POLYGON_H가 선언된적 없다면 아래 코드를 포함
#define POLYGON_H //POLYGON_H 정의부

class Polygon { //폴리곤 클래스 생성
	int size = 0; //다각형의 점의 개수 size 초기화
	int* xlist, * ylist; //다각형들의 x값과 y값을 저장할 배열을 가리키는 포인터 선언
public: //클래스 외부에서 접근 가능한 것들 정의
	Polygon(int size); //점의 개수를 받는 생성자 함수 정의
	~Polygon(); //할당 받은 동적 메모리 반환을 위한 소멸자 함수 정의
	void read(); //점들의 좌표를 입력받는 함수 정의
	bool get(int n, int& x, int& y); //n번째 점의 x값과 y값을 받는 함수 정의
};

#endif //여기까지를 POLYGON_H으로 정의함.