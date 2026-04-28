# 객체지향언어 8주차

### 프렌드 함수란

원래 객체 외부의 함수는 다른 클래스의 private 멤버를 액세스 할 수 없다.

하지만 만약 객체 외부의 함수가 클래스의 private멤버를 액세스 해야 하는 상황이 생긴다면, friend 함수를 이용할 수 있다. friend 함수는 클래스 외부의 있는 함수를 class와 같은 객체인것으로 컴파일러에게 알려주어 그 클래스의 멤버 함수가 아님에도 private 멤버를 액세스 할 수 있게 한다.

선언은 만약 bool equals(Rect r, Rect s)를 friend 함수로 만들고 싶다면 class 내부에 friend bool equals(Rect r, Rect s); 로 선언하면 된다. 

### 전방 선언

만약 bool equals(Rect r, Rect s) 함수를 선언부만 위에 작성한다면 컴파일 오류가 날 것이다. Rect라는 클래스가 정의 되어있지 않기 때문이다. 그래서 이런 오류를 방지 하기 위해 전방 선언이라는 기능이 있다. 만약 equals함수위에 다음과 같이 선언한다면 컴파일 오류가 나지 않는다. 

``` c++
class Rect;

bool equals(Rect r, Rect s); // Rect라는 클래스가 먼저 선언 되었기 때문에 오류가 나지 않음
```











