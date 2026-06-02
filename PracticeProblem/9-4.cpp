#include <iostream>
#include <string>
using namespace std;

class AbstractPoint {
protected:
	string name;
	int point = 0;
	int ratio;
public:
	AbstractPoint(string name, int ratio = 1);
	virtual void earn(int pay) = 0;
	virtual void show() = 0;
	int getPoint() { return point; }
};

AbstractPoint::AbstractPoint(string name, int ratio) {
	this->name = name;
	this->ratio = ratio;
}

class Platinum : public AbstractPoint {
	int standard;
	int bonusRatio;
public:
	Platinum(string name, int ratio, int standard, int bonusRatio);
	void earn(int pay);
	void show();
	void combine(Platinum& other);
	void resetPoint() { point = 0; }
};

Platinum::Platinum(string name, int ratio, int standard, int bonusRatio)
	:AbstractPoint(name, ratio) {
	this->standard = standard;
	this->bonusRatio = bonusRatio;
}

void Platinum::earn(int pay) {
	if (pay < 0) return;
	else if (pay < standard)
		point += pay * ratio / 100;
	else
		point += pay * bonusRatio / 100;
}

void Platinum::show() {
	cout << name << "님* 적립 포인트는 " << point << "점입니다." << endl;
}

void Platinum::combine(Platinum& other) {
	point += other.getPoint();
	other.resetPoint();
}

int main() {
	Platinum kim("김주혁", 5 , 100000, 7), mj("김민재", 5, 100000, 7);
	// 100000이상은 7%

	kim.earn(50000);
	kim.earn(200000);
	mj.earn(500000);
	kim.show(); mj.show();

	kim.combine(mj);
	kim.show(); mj.show();
	
	//16500 35000  51500 0
}