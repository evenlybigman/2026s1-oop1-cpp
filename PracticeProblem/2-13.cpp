#include <iostream>
using namespace std;

int main() {
	char order[20];
	int import = 0;
	int count;
	while (1) {
		cout << "에스프레소 3000원, 아메리카노 3500원, 카푸치노 4000원입니다." << endl;
		cout << "주문>>";
		cin >> order >> count;
		if (strcmp(order, "에스프레소") == 0) {
			cout << 3000 * count << "입니다. 맛있게 드세요" << endl;
			import +=3000 * count;
		}
		else if (strcmp(order, "아메리카노") == 0) {
			cout << 3500 * count << "입니다. 맛있게 드세요" << endl;
			import +=3500 * count;
		}
		else if (strcmp(order, "카푸치노") == 0) {
			cout << 4000 * count << "입니다. 맛있게 드세요" << endl;
			import +=4000 * count;
		}
		if (import > 30000) {
			cout << "오늘 " << import << "원을 판매하여 카페를 닫습니다. 내일봐요~~~";
			break;
		}
	}

}