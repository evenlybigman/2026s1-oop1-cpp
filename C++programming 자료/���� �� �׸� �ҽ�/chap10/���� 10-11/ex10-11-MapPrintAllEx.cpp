#include <iostream>
#include <string>
#include <map>
using namespace std;

// map 컨테이너 m에 들어 있는 모든 원소 출력
void printMap(map<string, int>& m) {
	map<string, int>::iterator it; // 변수 it 선언
	for (it = m.begin(); it != m.end(); it++) { // it를 이용하여 m의 모든 원소 순환
		string menu = it->first;
		int price = it->second;
		cout << menu << ":" << price << "원" << endl;
	}
}

int main() {
	map<string, int> priceMap;
	priceMap["붕어빵"] = 2000;
	priceMap["잉어빵"] = 2500;
	priceMap.insert(make_pair("국화빵", 3000));
	printMap(priceMap);
	cout << endl; // 한 줄 띄기

	priceMap.erase("붕어빵"); // 키가 "붕어빵"인 원소 삭제
	printMap(priceMap);
}