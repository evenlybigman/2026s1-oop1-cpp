# chap 2



cin.getline(char buf[], int size, char delimitChar) (공백까지 받을 수 있는 cin)

strcmp 인수

탭('\t')은 위치 정렬을 해준다

# chap 4

### 4-3

- size(string s)  ( 함수의 길이를 반환)
- string.append(size, char c)  sting 맨 마지막에 size개의 c를 추가한다. 

### 4-5

단어를 역순으로 바꾸는 알고리즘

``` c++
void Container::rotate() {
	for (int i = 0; i < size / 2; i++) { 
		int temp = p[i];
		p[i] = p[size - 1 - i];
		p[size - 1 - i] = temp;
	}
}
```

### 4-11

가장 비싼 객체를 리턴 하는 알고리즘

``` c++
Book* Library::mostExpensive() {
	int mostidx = 0;
	for (int i = 0; i < next; i++) {
		if (p[i].getPrice() > p[mostidx].getPrice()) {
			mostidx = i;
		}
	}
	return &p[mostidx];
}
```

# Chap 5

### 5-3

매개 변수들의 반지름 값을 더하는 addBubble 함수

``` c++
#include <iostream>
using namespace std;

class Bubble {
	int radius;
public:
	Bubble(int radius) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int n) { radius = n; }
};

void addBubble(Bubble& a, Bubble b, Bubble c) {
	a.setRadius((a.getRadius() + b.getRadius() + c.getRadius()));
}

int main() {
	Bubble a(5), b(10), c(130);
	addBubble(c, a, b);
	cout << "버블 c의 반지름 " << c.getRadius() << endl;
}
```

setRadius는 int n을 받지만 int를 반환하는 함수들의 덧셈을 매개변수로 주었다.

### 5-9

``` c++
#include <iostream>
using namespace std;

class MyStack {
	int p[10];
	int tos;
public:
	MyStack();
	bool push(int n);
	bool pop(int& n);
};

MyStack::MyStack() {
	tos = 0;
}

bool MyStack::push(int n) {
	if (tos >= 10) return false;
	else {
		p[tos++] = n;
		return true;
	}
}

bool MyStack::pop(int& n) {
	if (tos <= 0) return false;
	else {
		n = p[--tos];
		return true;
	}
}

int main() {
	MyStack st;
	for (int i = 0; i < 11; i++) {
		if (st.push(i)) cout << i << ' ';
		else cout << endl << i + 1 << "번째 푸시 실패! 스택 차 있음" << endl;
	}
	int n;
	for (int i = 0; i < 11; i++) {
		if (st.pop(n)) cout << n << ' ';
		else cout << endl << i + 1 << "번째 팝 실패! 스택이 비어 있음" << endl;
	}
}
```

클래스를 이용한 스택 구현

첫 시도 컴파일에러

push와 pop 구현 다시 연습 해볼 것

2회차 컴파일 에러 1회 이후 성공

