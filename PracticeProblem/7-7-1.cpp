#include <iostream>
using namespace std;

class Matrix {
	int entry[4];
public:
	Matrix(int idx0 = 0, int idx1 = 0, int idx2 = 0, int idx3 = 0);
	void show();
	Matrix operator + (const Matrix& other);
	Matrix& operator += (const Matrix& other);
	bool operator == (const Matrix& other) const;
};

Matrix::Matrix(int idx0, int idx1, int idx2, int idx3) {
	entry[0] = idx0; entry[1] = idx1;
	entry[2] = idx2; entry[3] = idx3;
}

void Matrix::show() {
	cout << "Matrix = { ";
	for (int i = 0; i < 4; i++) cout << entry[i] << ' ';
	cout << "}" << endl;
}

Matrix Matrix::operator + (const Matrix& other) {
	Matrix tmp = *this;
	for (int i = 0; i < 4; i++) {
		tmp.entry[i] += other.entry[i];
	}
	return tmp;
}

Matrix& Matrix::operator += (const Matrix& other) {
	for (int i = 0; i < 4; i++) {
		entry[i] += other.entry[i];
	}
	return *this;
}

bool Matrix::operator == (const Matrix& other) const {
	for (int i = 0; i < 4; i++) {
		if (entry[i] != other.entry[i]) return false;
	}
	return true;
}

int main() {
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;
	a.show(); b.show(); c.show();
	if (a == c) 
		cout << "a와 c는 같습니다." << endl;
}