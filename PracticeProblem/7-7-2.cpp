#include <iostream>
using namespace std;

class Matrix {
	int entry[4];
public:
	Matrix(int idx0 = 0, int idx1 = 0, int idx2 = 0, int idx3 = 0);
	void show();
	friend Matrix operator + (const Matrix& matrix1, const Matrix& matrix2);
	friend Matrix& operator += (Matrix& matrix1, const Matrix& matrix2);
	friend bool operator == (const Matrix& matrix1, const Matrix& matrix2);
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

Matrix operator + (const Matrix& matrix1, const Matrix& matrix2) {
	Matrix tmp;
	for (int i = 0; i < 4; i++) {
		tmp.entry[i] = matrix1.entry[i] + matrix2.entry[i];
	}
	return tmp;
}

Matrix& operator += (Matrix& matrix1,const Matrix& matrix2) {
	for (int i = 0; i < 4; i++) {
		matrix1.entry[i] += matrix2.entry[i];
	}
	return matrix1;
}

bool operator == (const Matrix& matrix1, const Matrix& matrix2) {
	for (int i = 0; i < 4; i++) {
		if (matrix1.entry[i] != matrix2.entry[i]) return false;
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