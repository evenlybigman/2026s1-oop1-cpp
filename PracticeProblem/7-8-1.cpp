#include <iostream>
using namespace std;

class Matrix {
	int entry[4];
public:
	Matrix(int idx0 = 0, int idx1 = 0, int idx2 = 0, int idx3 = 0);
	void show();
	int* operator >> (int matrix2[]);
	Matrix& operator << (int matrix2[]);
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

int* Matrix::operator >> (int matrix2[]) {
	if (matrix2)
	for (int i = 0; i < 4; i++) {
		matrix2[i] = entry[i];
	}
	return matrix2;
}

Matrix& Matrix::operator << (int matrix2[]) {
	for (int i = 0; i < 4; i++) {
		entry[i] = matrix2[i];
	}
	return *this;
}

int main() {
	Matrix a(4, 3, 2, 1), b;
	int x[4],y[4] = { 1,2,3,4 };
	a >> x; //a의 각 원소를 배열 x에 복사. x[]는 {4, 3, 2, 1}; 
	b << y; //배열 y의 원소 값을 b의 각 원소에 설정

	for (int i = 0; i < 4; i++) cout << x[i] << ' ';
	cout << endl;
	b.show();
}