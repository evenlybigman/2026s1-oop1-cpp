#include <iostream>
#include <string>
#include <map>
using namespace std;

class Item { // 한 개의 상품 정보
public:
	int price; // 상품 가격
	int count; // 재고 수량
	Item(int price = 0, int count = 0) { this->price = price; this->count = count; }
};

int main() {
	map<string, Item> stock; // 상품 목록 저장 맵
	string name; // 상품명
	int price = 0, count = 0, removedCount = 0; // 상품 가격과 제고 수량, 삭제된 개수

	while (true) {
		cout << "상품 입고:1, 검색:2, 삭제:3, 종료:4>>";
		int menu;
		cin >> menu; // 메뉴 입력
		switch (menu) {
		case 1: // 상품 입고
			cout << "상품명, 가격, 개수 입력>>";
			cin >> name >> price >> count;
			stock.insert(make_pair(name, Item(price, count))); // 삽입
			break;
		case 2: // 검색
			cout << "상품명 입력>>";
			cin >> name;
			if (stock.find(name) == stock.end()) // 없는 경우
				cout << name << " 없음" << endl;
			else { // 상품 있는 경우
				Item item = stock[name]; // 검색
				cout << "가격 " << item.price << ", 재고 " << count << "개" << endl;
			}
			break;
		case 3: // 삭제
			cout << "상품명 입력>>";
			cin >> name;
			removedCount = stock.erase(name); // 상품 삭제
			if (removedCount == 0) // 없는 경우
				cout << name << " 없음" << endl;
			else
				cout << name << " 삭제 완료" << endl;
			break;
		case 4: // 종료
			cout << "종료합니다..." << endl;
			return 0; // 프로그램 종료
		} // end of switch
	} // end of while
}