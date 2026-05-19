#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	
	while (true) {
		int n;

		cout << ">>";

		cin >> n;
		if (n == -1) break;
		v.push_back(n);
	}
	
	int big = v[0];

	for (int i = 0; i < v.size(); i++) {
		if (big < v[i]) big = v[i];
		cout << v.at(i) << ' ';
	}

	cout << endl;
	cout << "가장 큰 값: " << big << endl;
}