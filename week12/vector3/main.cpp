#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

void showAll(vector<int>& iv) {
	vector<int>::iterator it;
	for (it = iv.begin(); it != iv.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

int main() {
	vector<int> iv;
	iv.push_back(1);
	iv.push_back(2);
	iv.push_back(3);

	showAll(iv);

	vector<int>::iterator it;
	for (it = iv.begin(); it != iv.end(); it++) {
		int n = *it;
		n = n * 2;
		*it = n;
	}

	showAll(iv);
}