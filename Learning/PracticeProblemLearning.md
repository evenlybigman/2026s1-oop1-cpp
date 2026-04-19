# chap2



cin.getline(char buf[], int size, char delimitChar) (공백까지 받을 수 있는 cin)

strcmp 인수

탭('\t')은 위치 정렬을 해준다

# chap4

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

