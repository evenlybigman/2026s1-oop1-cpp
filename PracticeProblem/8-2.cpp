#include <iostream>
using namespace std;

class EspressoCoffee {
	string name;
	int espresso, water;
public:
	EspressoCoffee(string name, int espresso, int water) {
		this->name = name; this->espresso = espresso; this->water = water;
	}
	void recipe() {
		cout << name << "는 에스프레소 " << espresso << "스푼";
		cout << ", 물 " << water << "스푼" << endl;
	}
	void get(string& name, int& espresso, int& water) {
		name = this->name; espresso = this->espresso; water = this->water;
	}
};

class Cappuucino : EspressoCoffee {
	int milk;
	bool isIce;
public:
	Cappuucino(string name, int espresso, int water, int milk, bool isIce) : EspressoCoffee(name, espresso, water) {
		this->milk = milk; this->isIce = isIce;
	}
	void recipe();
};

void Cappuucino::recipe() {
	string n;
	int e, w;
	get(n, e, w);
	cout << n << "는 에스프레소 " << e << "스푼";
	cout << ", 물 " << w << "스푼";
	cout << ", 우유 " << milk << "스푼, ";
	if (isIce)
		cout << "얼음 충분히";
	cout << endl;
}

int main() {
	EspressoCoffee espresso("에스프레소", 2, 0);
	EspressoCoffee americano("에스프레소", 2, 5);
	americano.recipe();

	Cappuucino myHotCap("따뜻한 카푸치노", 2, 2, 4, false);
	myHotCap.recipe();
	Cappuucino myIceCap("아이스카푸치노", 2, 1, 5, true);
	myIceCap.recipe();
}