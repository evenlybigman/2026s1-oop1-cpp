#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v; // v는 정수만 저장 가능한 가변 벡터 컨테이너
	
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	cout << "현재 개수 = " << v.size() << endl;
	int size = v.size();
	for (int i = 0; i < size; i++) {
		cout << v.at(i) << "\t";
	}

	cout << endl;

	v[0] = 10;
	int m = v[2]; // v[2] = v.at(2)
	cout << "두 번째 원소는 " << m << endl;

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << "\t"; // v[i]는 벡터의 i번째 원소 
	cout << endl;
}