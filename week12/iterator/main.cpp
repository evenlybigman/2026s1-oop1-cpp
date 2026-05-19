#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>& v) {
	vector<int>::iterator it;
	for (it = v.begin(); it != v.end(); it++) {
		cout << *it << ' ';
	}
	cout << endl;
}

int biggest(vector<int>& v) {
	int big = v[0];
	for (int i = 0; i < v.size(); i++) {
		if (big < v[i]) big = v[i];
	}
	return big;
}

int main() {
	vector<int> v;

	while (true) {
		int n;

		cout << ">>";

		cin >> n;
		if (n == -1) break;
		v.push_back(n);
	}

	print(v);
	cout << "가장 큰 값: " << biggest(v) << endl;
}