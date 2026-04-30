#include <iostream>
using namespace std;

class Wallet {
	string name;
	int money;
public:
	Wallet(string name, int money = 0);
	void show();
	Wallet& operator += (int money2);
	Wallet& operator -= (int money2);
	int operator +(const Wallet& money2);
	int operator +(int money2);
	friend int operator +(int op1, Wallet op2);
	Wallet& operator = (int money2);
};

Wallet::Wallet(string name, int money) {
	this->name = name;
	this->money = money;
}

void Wallet::show() {
	cout << name << " 지갑에 " << money << "있어요." << endl;
}

Wallet& Wallet::operator += (int money2) {
	this->money += money2;
	return *this;
}

Wallet& Wallet::operator -= (int money2) {
	this->money -= money2;
	return *this;
}

int Wallet::operator + (const Wallet& money2) {
	Wallet tmp = *this;
	tmp.money += money2.money;
	return tmp.money;
}

int Wallet::operator + (int money2) {
	Wallet tmp = *this;
	tmp.money += money2;
	return tmp.money;
}

int operator +(int op1, Wallet op2) {
	Wallet tmp = op2;
	tmp.money += op1;
	return tmp.money;
}

Wallet& Wallet::operator = (int money2) {
	this->money = money2;
	return *this;
}

int main() {
	Wallet a("옥지윤", 2000), b("성주연", 100), c("박채원"); //박채원 지갑은 0원
	a += 1000; a.show();
	a -= 500; a.show();
	b = a + b + 100; // = 연산자는 금액만 복사
	b.show(); // b의 주인은 "성주연"으로 출력
	c = 500 + b; // = 연산자는 금액만 복사
	c.show(); // c의 주인은 "박채원"으로 출력
}