# 객체지향언어 12주차 / 일반화와 템플릿

## 일반화와 템플릿

### 정의

함수나 클래스를 일반화 시키고, 매개 변수 타입을 지정하여 틀에서 찍어 내듯이 함수나 클래스 코드를 생산하는 기법

만약 a,b를 받아서 서로 값을 바꾸는 swap함수를 만든다고 했을 때 그냥 만든다면 int형, double형, char형의 swap함수를 함수 중복을 이용해서 필요한 타입형의 swap이 필요할 때 마다 만들어야 하는 번거로움이 생긴다. 그럴때 템플릿을 통해서 타입형에 관계 없이 사용 가능하게 함수를 만들 수 있다.

``` c++
template <class T> 또는
template <typename T>
void myswap(T& a, T& b) {
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}
```

템플릿은 키워드, 타입선언, 타입 이름으로 선언할 수 있는데 위에 코드에서처럼 class나 typename을 쓰고 뒤에 사용할

변수 이름을 적으면 그 이름은 이제부터 제네릭 타입이 된다. 그래서 swap에서 T타입인 변수들은 컴파일러가 알아서 이 함수를 사용하는 변수형으로 코드를 바꿔서 컴파일한다. 만약 int형과 double형, circle 클래스 타입 3개가 swap의 매개변수로 쓰였다면 컴파일러가 그 3개의 함수를 추가하고 T타입 코드는 사라지게 된다. 

### 장점

제네릭을 이용해서 함수를 편하게 일반화하여 여러개를 만들어야 하는 번거로움을 줄일 수 있다.

### 단점

이처럼 템플릿은 함수 코드의 재사용의 장점이 있지만,포팅 취약하다는 단점이 있다. 포팅은 이식성을 나타내는 말로 만약 템플릿을 지원하지 않는 환경에서 코드를 재사용 하였을 때 실행이 되지 않아. 템플릿을 사용하지 않은 코드로 모두 바꿔야 한다는 단점이 있다.

또한 컴파일 오류 메세지가 빈약하여 디버깅에 난이도가 올라간다는 단점이 있다.

### 템플릿 함수와 중복 함수

``` c++
#include <iostream>
using namespace std;

template <class X>
void print(X array[], int size) {
	for (int i = 0; i < size; i++)
		cout << array[i] << "\t";

	cout << endl;
}

void print(char array[], int size) {
	for (int i = 0; i < size; i++)
		cout << (int)array[i] << "\t";

	cout << endl;
}

int main() {
	int x[] = { 1, 2, 3, 4, 5 };
	double d[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };

	print(x, 5);
	print(d, 5);
	
	char c[] = { 1, 2, 3, 4, 5 };
	
	print(c, 5);

}
```

위 코드에는 배열의 요소 값을 출력하는 print 함수가 템플릿 함수와 char를 매개 변수로 하는 함수 중복이 같이 있다. 템플릿 함수는 바인딩 할 함수가 없을 때에만 컴파일러가 찾기 때문에 print(x,5)와 print(d,5)에서는 템플릿 함수가 적용이 되지만, print(c, 5)에서는 이미 char를 매개변수로 하는 print가 있기 때문에 print(char c, int size) 함수가 호출된다.



### 제네릭 클래스

제네릭을 이용해서 클래스를 만들 수도 있다. 만약에 push와 pop을 할 수 있는 stack 클래스를 구현한다고 하자. 이 때 stack 안에 들어있는 data의 값이 타입마다 달라져야 하기 때문에 제네릭을 이용한다면 어떤 타입형의 데이터를 저장하는 스택이던 간에 사용할 수 있는 stack 클래스를 만들 수 있다. 제네릭 클래스를 선언할때는 함수와 마찬가지로 위에 template <class X> 같이 만들면 되는건 같다. 하지만 제네릭 클래스에서는 구현부에서도 template <class X>를 선언한 뒤 이름공간 선언뒤에 <X>와 같이 제네릭 클래스의 이름을 붙여주어야 한다. 또한 이 클래스를 사용할 때도 클래스 이름 뒤에 (int)와 같이 타입형을 선언해주어야 그 타입형에 맞는 객체를 생성한다.

``` c++
#include <iostream>
#include <string>
using namespace std;

template <class T>
class Stack {
	int top;
	T data[100];
public:
	Stack();
	void push(T element);
	T pop();
};

template <class T>
Stack<T>::Stack() {
	top = -1; // top은 스택의 가장 최근에 저장된 데이터의 인덱스를 가리킨다.
}

template <class T>
void Stack<T>::push(T element) {
	if (top == 99) { // full
		cout << "full" << endl;
		return;
	}
	top++;
	data[top] = element;
}

template <class T>
T Stack<T>::pop() {
	if (top == -1) {
		cout << "empty" << endl;
		return 0;
	}
	return data[top--];
}

int main() {
	Stack<int> iStack;
	iStack.push(3);
	cout << iStack.pop() << endl;

	Stack<double> dStack;
	dStack.push(3.5);
	cout << dStack.pop() << endl;

	Stack<string> sStack;
	sStack.push("여러분");
	sStack.push("어떻게 사는지");
	sStack.push("궁금해요");
	sStack.push("공부 잘하고 있겠죠?");

	cout << sStack.pop() << endl;
	cout << sStack.pop() << endl;
	cout << sStack.pop() << endl;
	cout << sStack.pop() << endl;
}
```

## STL

C++에서 기본적으로 사용할 수 있게 만들어둔 템플릿 라이브러리가 있는데 이것을 STL (standard template library)라고 한다. 많은 제네릭 클래스와 제네릭 함수가 있어서 쉽게 응용 프로그램을 작성할 수 있다.

### 구성

STL은 컨테이너와 iterator, 알고리즘로 구성 된다.

컨테이너(템플릿 클래스)는 다양한 자료구조를 표현한 클래스로 스택, 큐, 벡터 등등이 있다. 템플릿 클래스를 사용하기 위해서는 꼭 #include <>를 써야 한다. 예) #include <vector>

iterator(컨테이너 원소에 대한 포인터)는 컨테이너의 원소들을 순회하면서 접근하기 위해 만들어진 컨테이너 원소에 대한 포인터이다. iterator를 이용해 컨테이너의 원소에 쉽게 접근할 수 있다.

알고리즘(템플릿 함수)는 컨테이너 원소에 대한 복사, 검색, 삭제, 정렬 등의 기능을 구현한 템플릿 함수로 전역 함수기 때문에 어디서든 사용 가능하다. (컨테이너 멤버 함수 아님)

### vector

vector는 가변 크기의 배열을 일반화한 클래스로 vector v; 라고 했을 때 v[0]은 v.at(0)과 같다. 또한 begin()은 배열의 맨 앞에 요소를 가리키고 end는 맨 마지막 요소의 뒤에 요소를 가리킨다. (마지막 요소 x) vector에 값을 집어 넣을 땐 일반적으로 v[0] = 1; v.at(0) = 1;과 같이 넣을 수 있고 v.push_back(item)은 item을 배열에 뒤에 추가한다. size()는 배열의 크기를 리턴하고 capacity = 5로 배열의 크기를 미리 정할 수 있다.

### iterator

iterator는 컨테이너 원소에 대한 포인터로 선언 할때는 vector<int>::iterator it; 처럼 컨테이너 이름과 타입형을 명시해야 한다. 포인터이기 때문에 값을 바꿀 수도 있고 가리키는 주소의 위치를 바꿀 수도 있다.
