#include <iostream>
#include <string>
using namespace std;

class Member {
protected:
	string name;
	int point = 0;
	int ratio;
public:
	Member(string name, int ratio = 1);
	void earn(int pay);
	int getPoint();
	void show();
};

Member::Member(string name, int ratio) {
	this->name = name;
	this->ratio = ratio;
}

void Member::earn(int pay) {
	point += pay * ratio / 100;
}

int Member::getPoint() {
	return point;
}

void Member::show() {
	cout << name << "의 포인트 " << point << endl;
}

class GoldMember : public Member {
	int middleRatio;
	int highRatio;
public:
	GoldMember(string name,int middleRatio = 4, int highRatio = 5);
	void earn(int pay);
	void show();
};

GoldMember::GoldMember(string name, int middleRatio, int highRatio)
	:Member(name) {
	this->middleRatio = middleRatio;
	this->highRatio = highRatio;
}

void GoldMember::earn(int pay) {
	if (pay < 0) return;
	if (pay < 100000) {
		point += pay * ratio / 100;
		return;
	}
	else if (pay < 200000) {
		point += pay * middleRatio / 100;
		return;
	}
	else
		point += pay * highRatio / 100;
}

void GoldMember::show() {
	cout << name << "의 포인트 " << getPoint() << endl;
}

int main() {
	Member a("황기태");
	GoldMember b("제인");
	for (int i = 0; i < 5; i++) {
		cout << (i + 1) << " 이름과 지출액>>";
		string name; int pay;
		cin >> name >> pay;
		if (name == "황기태") a.earn(pay);
		else if (name == "제인") b.earn(pay);
		else i--;
	}
	a.show(); b.show();
}