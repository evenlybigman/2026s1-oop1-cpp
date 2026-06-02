#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
	srand((unsigned)time(NULL));

	vector<string> firstName;
	vector<string> middleName;
	vector<string> lastName;
	vector<string> testName;
	string name;
	int nameAmount = 0;
	int maxAmount = 0;


	cout << "성으로 사용될 글자들 입력>>";
	for (int i = 0; i < 5; i++) {
		cin >> name;
		firstName.push_back(name);
	}
	cout << "중간 이름으로 사용될 글자들 입력>>";
	for (int i = 0; i < 5; i++) {
		cin >> name;
		middleName.push_back(name);
	}

	cout << "끝 이름으로 사용될 글자들 입력>>";
	for (int i = 0; i < 5; i++) {
		cin >> name;
		lastName.push_back(name);
	}

	while (true) {
		cout << "생성할 이름 수>>";
		cin >> nameAmount;
		maxAmount = firstName.size() * middleName.size() * lastName.size();
		if (nameAmount > maxAmount)
			cout << "최대 생성 가능한 이름 개수는 " << maxAmount << endl;
		else {
			for (int i = 0; i < nameAmount; i++) {
				int firstN = rand() % firstName.size();
				int middleN = rand() % middleName.size();
				int lastN = rand() % lastName.size();

				string newName = firstName[firstN] + middleName[middleN] + lastName[lastN];
				for (int i = 0; i < testName.size(); i++) {
					if (newName == testName[i]) continue;
				}
				
				cout << firstName[firstN] << middleName[middleN] << lastName[lastN];
				cout << ' ';

				testName.push_back(firstName[firstN] + middleName[middleN] + lastName[lastN]);
			}
			cout << endl;
		}

		if (nameAmount == 0) break;
	}
}