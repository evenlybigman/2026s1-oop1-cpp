#include <iostream>
#include <string>
using namespace std;

class Fitness {
	string man = "남";
	string woman = "여";
	int countMan = 0;
	int countWoman = 0;
public:
	Fitness& arrive(string gender, int count);
	int& at(string gender);
	void count(string gender, int& count);
};


Fitness& Fitness::arrive(string gender, int count) {
	if (gender == man)
		countMan += count;
	else if (gender == woman)
		countWoman += count;
	return *this;
}

void Fitness::count(string gender, int& count) {
	if (gender == man)
		count = countMan;
	else if(gender == woman)
		count = countWoman;
}

int& Fitness::at(string gender) {
	if (gender == man)
		return countMan;
	else 
		return countWoman;
}

int main() {
	Fitness altong;
	altong.arrive("남", 3).arrive("여", 6).arrive("남", 9);


	int m = 0, w = 0;
	altong.count("남", m); //m에 남자 회원수 불러오기
	altong.count("여", w); //w에 여자 회원수 불러오기
	cout << "남자 회원 " << m << "명, 여자 회원 " << w << "명" << endl;

	altong.at("남") = 100; //남자 회원수를 100으로 저장
	m = altong.at("남"); //남자 회원수를 m에 저장
	w = altong.at("여"); // 여자 회원수를 w에 저장
	cout << "남자 회원 " << m << "명, 여자 회원 " << w << "명" << endl;
}