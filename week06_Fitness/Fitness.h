#ifndef FITNESS_H
#define

#include <iostream>
#include <string>
using namespace std;

class Fitness {
	string man = "남";
	string woman = "여";
	int countMan = 0;
	int countWoman = 0;
public:
	Fitness& arrive(string gender, int count);
	int& at(string gender);
	void count(string gender, int& count);
};


Fitness& Fitness::arrive(string gender, int count) {
	if (gender == man)
		countMan += count;
	else if (gender == woman)
		countWoman += count;
	return *this;
}

void Fitness::count(string gender, int& count) {
	if (gender == man)
		count = countMan;
	else if (gender == woman)
		count = countWoman;
}

int& Fitness::at(string gender) {
	if (gender == man)
		return countMan;
	else
		return countWoman;
}

#endif