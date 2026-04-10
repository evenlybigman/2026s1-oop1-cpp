#include <iostream> //입출력 라이브러리 헤더파일 포함
#include <string> //문자열 라이브러리 헤더파일 포함
#include "Fitness.h" //Fitness.h 헤더파일 포함
using namespace std; //std 이름공간 지칭 생략

Fitness& Fitness::arrive(string gender, int count) { //성별과 명수를 받아서 count에 추가해주는 함수 구현
	if (gender == man) //성별이 "남"이라면
		countMan += count; //countMan에 count만큼을 더한다
	else if (gender == woman) //성별이 "여"라면
		countWoman += count; //countWoman에 count만큼을 더한다
	else //성별이 그 외라면 (오타검사)
	cout << "잘못된 성별" << endl; //오류 메세지를 출력
	return *this; //이 객체를 리턴한다.
}

void Fitness::count(string gender, int& count) { //해당하는 성별의 변수 값을 해당하는 count에 대입한다
	if (gender == man) //성별이 "남"이라면
		count = countMan; //count는 현재 남자의 명수가 된다.
	else if (gender == woman) //성별이 "여"라면
		count = countWoman; //count는 현재 여자의 명수가 된다.
	else //성별이 그 외라면 (오타검사)
		cout << "잘못된 성별" << endl; //오류 메세지 출력
}

int& Fitness::at(string gender) { //성별을 받아 그 성별의 명수를 읽거나 쓸 수 있는 함수 구현
	if (gender == man) //성별이 남이라면 
		return countMan; //현재 남자의 명수를 반환한다. 
	else //남자가 아니라면
		return countWoman; //현재 여자의 명수를 반환한다.
}