#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main() {
	vector<string> stringVec;
	double average = 0;

	cout << "6과목의 학점 입력>>";
	for (int i = 0; i < 6; i++) {
		string score;
		cin >> score;
		stringVec.push_back(score);
	}

	for (int i = 0; i < stringVec.size(); i++) {
		if      (stringVec[i] == "A+") average += 4.5;
		else if (stringVec[i] == "A")  average += 4;
		else if (stringVec[i] == "B+") average += 3.5;
		else if (stringVec[i] == "B")  average += 3;
		else if (stringVec[i] == "C+") average += 2.5;
		else if (stringVec[i] == "C")  average += 2;
		else if (stringVec[i] == "D+") average += 1.5;
		else if (stringVec[i] == "D")  average += 1;
	}

	average /= stringVec.size();
	
	cout << "학점 평균은 " << average;
}