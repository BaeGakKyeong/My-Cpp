#include <iostream>
using namespace std;

class Circle{
public:
    int radius;

    Circle();
    Circle(int r);

    ~Circle();      //소멸자 선언. 소멸자는 디폴트 생성자와 동일한 형태(매개변수, 리턴타입 없음)이여야 함.

    double getArea();
};

Circle::Circle() : Circle(1) { }

Circle::Circle(int r) : radius(r) { 
    cout << "반지름 " << radius << "원 생성" << endl;
}

Circle::~Circle() { //소멸자 구현
    cout << "반지름 " << radius << "원 소멸" << endl;
}

double Circle::getArea(){
    return 3.14 * radius * radius;
}

int main(){
    Circle Donut;
    Circle pizza(30);

    return 0;
}

//실행 결과를 보면 알 수 있지만, 객체의 소멸은 생성의 역순으로 진행된다.