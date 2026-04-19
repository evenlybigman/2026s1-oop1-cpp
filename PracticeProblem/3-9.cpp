#include <iostream>
#include <string>
using namespace std;

class Coffee {
	string name;
	int price;
public:
	Coffee(string name,int price);
	string getName() { return this->name; }
	int getPrice() { return this->price; }
};

Coffee::Coffee(string name,int price){
	this->name = name;
	this->price = price;
}

class Cafe {
	int income = 0;
	int lastincome = 0;
	Coffee menu[3] = {
		{"에스프레소",3000},
		{"아메리카노",3500},
		{"카푸치노",4000}
	};
public:
	void addOrder(string name,int count);
	int getIncome() {return this->income;}
	int getLatincome() { return this->lastincome; }
};

void Cafe::addOrder(string name, int count) {
	for (int i = 0; i < 3; i++) {
		if (name == menu[i].getName()) {
			lastincome += menu[i].getPrice() * count;
			income += lastincome;
			return;
		}
	}
	cout << "해당 메뉴가 없습니다." << endl;
}

int main() {
	Cafe cafe;
	string name;
	int count;
	cout << "에스프레소 3000원, 아메리카노 3500원, 카푸치노 4000원입니다." << endl;
	while (cafe.getIncome() <= 30000) {
		cout << "주문>>";
		cin >> name >> count;
		cafe.addOrder(name, count);
		cout << cafe.getLatincome() << "입니다. 맛있게 드세요." << endl;
	}
	cout << "오늘 " << cafe.getIncome() << "을 판매하여 카페를 닫습니다. 내일 봐요~~~";
}