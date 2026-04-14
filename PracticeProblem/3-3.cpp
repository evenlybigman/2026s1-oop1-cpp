#include <iostream>
#include <string>
using namespace std;

class Account {
	string Owner;
	int money = 0;
public:
	void deposit(int money) { this->money += money; }
	string getOwner() { return this->Owner; }
	int withdraw(int money);
	Account(string name);
	int inquiry() { return this->money; }
};

Account::Account(string name) {
	this->Owner = name;
}

int Account::withdraw(int money) {
	if (this->money > money) {
		this->money -= money;
		return money;
	}
	else {
		money = this->money;
		this->money = 0;
		return money;
	}
}

int main() {
	Account a("황수희");
	a.deposit(20000);
	cout << a.getOwner() << " 잔액은 " << a.inquiry() << endl;
	int money = a.withdraw(15000);
	cout << money << "원 출금, ";
	cout << a.getOwner() << " 잔액은 " << a.inquiry() << endl;
	money = a.withdraw(8000);
	cout << money << "원, 출금, ";
	cout << a.getOwner() << " 잔액은 " << a.inquiry() << endl;
}