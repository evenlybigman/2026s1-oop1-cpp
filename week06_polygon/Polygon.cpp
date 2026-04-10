#include <iostream> //입출력 라이브러리 헤더파일 포함
#include "Polygon.h" //폴리곤 헤더파일 포함
using namespace std; //std 이름공간 지칭 생략

Polygon::Polygon(int size) { //생성자 함수 구현부
	this->size = size; //매개변수로 받은 size를 점의 개수로 한다.
	xlist = new int[this->size]; //xlist포인터는 동적메모리할당으로 받은 배열을 가리킨다
	ylist = new int[this->size]; //ylist포인터는 동적메모리할당으로 받은 배열을 가리킨다
}

Polygon::~Polygon() { //동적 메모리 반환을 위한 소멸자 구현
	delete[] xlist; //xlist가 가리키는 동적 메모리 반환
	delete[] ylist; //ylist가 가리키는 동적 메모리 반환
}

void Polygon::read() { // x와 y의 좌표를 받는 함수 구현
	cout << "아래의 x, y 값으로 " << size << "개의 점을 입력하세요." << endl; //안내문 출력
	for (int i = 0; i < size; i++) { //점의 개수만큼 반복
		cin >> xlist[i] >> ylist[i]; //x, y순서로 배열에 값 입력
	}
}

bool Polygon::get(int n, int& x, int& y) { //n번째 점의 x값과 y값을 받는 에러 검사 함수
	if (n <= 0 || n > size) //점의 개수가 음수거나 다각형의 점보다 크다면
		return false; //flase 반환
	else { //오류가 없다면
		x = xlist[n - 1]; //x값에 n번째 x의 좌표를 대입한다
		y = ylist[n - 1]; //y값에 n번째 y의 좌표를 대입한다
		return true; //true를 반환
	}
}