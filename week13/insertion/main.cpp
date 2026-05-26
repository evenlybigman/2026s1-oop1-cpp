#include <iostream>
using namespace std;

ostream& fivestar(ostream& out) {
	cout << "*****";
	return out;
}

ostream& beep(ostream& out) {
	cout << '\a';
	return out;
}

istream& question(istream& in) {
	cout << "거울아 거울아 누가 제일 예쁘니?" << endl;
	return in;
}

int main() {
	string answer;
	cin >> question >> answer;
	cout << fivestar;
	cout << beep;
	cout << answer;
}