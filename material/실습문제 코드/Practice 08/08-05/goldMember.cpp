#include <iostream>
using namespace std;

class Member {
protected:
	string name; // 회원 명
	int point = 0; // 초기 포인트 0
	int ratio; // 포인트 적립률. 단위: %
public:
	Member(string name, int ratio = 1);
	void earn(int pay); // pay 금액을 사용한 경우 포인트 적립
	int getPoint(); // 현재 포인트 리턴
	void show(); // 이름과 포인트 출력
};

Member::Member(string name, int ratio) {
	this->name = name; this->ratio = ratio;
}

void Member::earn(int pay) { // pay 만큼 지출한 경우 포인트 적립
	point += pay * ratio / 100; // ratio 비율로 포인트 적립
}

int Member::getPoint() {
	return point;
}

void Member::show() { 
	cout << name << "의 포인트 " << point << endl; 
}

class GoldMember : public Member {
public:
	GoldMember(string name) : Member(name, 3) {}
	void earn(int pay) { // pay 만큼 지출한 경우 포인트 적립
		int goldRatio = 0;
		if(pay < 100000) goldRatio = ratio;
		if(pay >= 100000 && pay < 200000) goldRatio = 4; // goldRatio는 4
		else if(pay >= 200000) goldRatio = 5; // goldRatio는 5
		point += pay * goldRatio / 100; // ratio 비율로 포인트 적립
	}
};


int main() {
	Member a("황기태");
	GoldMember b("이재문"); 
	
	for (int i = 0; i < 5; i++) {
		cout << (i + 1) << " 이름과 지출액>>";
		string name; int pay;
		cin >> name >> pay;
		if (name == "황기태") a.earn(pay);
		else if (name == "이재문") b.earn(pay);
		else i--; // 없는 회원이므로 다시 입력
	}
	a.show(); b.show();
}