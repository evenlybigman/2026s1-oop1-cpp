#include <iostream>
using namespace std;

class Collector {
	int* p;
	int size = 0;
public:
	Collector(int size, int values[]);
	Collector(const Collector& c);
	~Collector();
	void show();
	int getSize() { return size; }
	int get(int index) { return p[index]; }
};

Collector::Collector(int size, int values[]) {
	this->size = size;
	p = new int[size];
	for (int i = 0; i < this->size; i++) {
		p[i] = values[i];
	}
}

Collector::Collector(const Collector& c) {
	this->size = c.size;
	this->p = new int[c.size];
	for (int i = 0; i < c.size; i++) {
		this->p[i] = c.p[i];
	}
}

Collector::~Collector() {
	delete[] p;
}

void Collector::show() {
	cout << "데이터 수 " << size << ": ";
	for (int i = 0; i < size; i++) {
		cout << p[i] << " ";
	}
	cout << endl;
}

double calcAvg(Collector c) {
	double avg = 0;
	for (int i = 0; i < c.getSize(); i++) {
		avg += c.get(i);
	}
	return avg / c.getSize();
}

int main() {
	int tmp[] = { 69, 70, 71, 72, 74 };
	Collector weight(4, tmp);
	double avg = calcAvg(weight);
	weight.show();
	cout << "평균은 " << avg << endl;
}