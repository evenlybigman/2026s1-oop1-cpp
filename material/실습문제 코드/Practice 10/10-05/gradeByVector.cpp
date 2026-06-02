#include <iostream>
#include <vector>
using namespace std;

int main() {
	const string grades[] = { "A+", "A", "B+", "B", "C+", "C", "D+", "D", "F" };
	const double scores[] = { 4.5, 4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0, 0 };
	vector<string> v;

	// 6������ ���� �о� vector�� ����
	cout << "6������ ���� �Է�>>";
	for (int i = 0; i < 6; i++) {
		string grade;
		cin >> grade;
		v.push_back(grade);
	}

	// ������ ��� ���
	double sum = 0;
	for (int i = 0; i < v.size(); i++) { // ���Ϳ� ��� �ִ� ��� ���� ���
		int j = 0;
		for (j = 0; j < 9; j++) { // ���� �̸� �˻�
			// grades �迭���� ã��
			if (v.at(i) == grades[j]) {
				sum += scores[j];
				break;
			}
		}
		if (j == 9) {
			cout << v.at(i) << "�� ������ �߸� �ԷµǾ����ϴ�." << endl;
			exit(0); // ���α׷� ����
		}
	}
	cout << "���� ����� " << sum / v.size();
}