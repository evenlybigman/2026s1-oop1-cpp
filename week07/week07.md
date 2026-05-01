헤더파일 cstring string 차이

중복 함수 검사는 언제하냐



중복 함수 실습

``` c++
#include <iostream>
using namespace std;

int big(int x, int y) {
	if (x > y) return x;
	else return y;
}

int big(int array[], int size) {
	int result = array[0];
	for (int i = 0; i < size; i++) {
		if (result < array[i]) result = array[i];
	}
	return result;
}

int main() {
	int array[5] = { 1, 9, -2, 8, 6 };
	cout << big(2, 3) << endl;
	cout << big(array, 5) << endl;
}
```

디폴트 매개 변수 실습

``` c++
#include <iostream>
using namespace std;

void star(int count = 10) {
    for (int i = 0; i < count; i++)
        cout << "*";
    cout << endl;
}

int main() {
    star();
    star(20);
}
```

디폴트 매개 변수 실습 2

``` c++
#include <iostream>
using namespace std;

void f(char text = ' ', int line=1) {
	for (int i = 0; i < line; i++) {
		for (int j = 0; j < 10; j++)
			cout << text;
		cout << endl;
	}
}

int main() {
	f();
	f('%');
	f('@', 5);
}
```

함수  중복의 모호성





스태틱

namespace를 붙여야 하는 이유

