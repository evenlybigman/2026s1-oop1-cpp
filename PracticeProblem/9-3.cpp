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

class Silver : public AbstractPoint {
public:
	Silver(string name, int ratio = 3);
	void earn(int pay);
	void show();
};

Silver::Silver(string name, int ratio)
	:AbstractPoint(name, ratio) {
}

void Silver::earn(int pay) {
	point += pay * ratio / 100;
}

void Silver::show() {
	cout << name << "님* 적립 포인트는 " << point << "점입니다." << endl;
}

int main() {
	Silver kim("김주혁"), mj("김민재", 4);
	// 김주혁 적립률 3%, 김민재 적립률 4%

	kim.earn(10000);
	kim.earn(20000);
	kim.earn(5000);
	mj.earn(5000);
	kim.show(); mj.show();
	// 1050, 200
}