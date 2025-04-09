#include <iostream>
using namespace std;

class Circle{
public:
    int radius;
    Circle();
    Circle(int r);
    double getArea();
};

Circle::Circle(){
    radius = 1; //맴버변수로 선언된 radius는, 생성자 Circle()에서 선언 없이 동작한다.
    cout << "반지름 " << radius << "원 생성" << endl;
}

Circle::Circle(int r){
    radius = r;
    cout << "반지름 " << radius << "원 생성" << endl;
}

double Circle::getArea(){
    return 3.14 * radius * radius;
}

int main(){
    Circle donut;   //매개변수가 없는 생성자를 호출함.
    double area = donut.getArea();      
    cout << "donut면적은 " << area << endl;

    Circle pizza(30);   //정수형 매개변수를 하나 갖는 생성자를 호출함.
    area = pizza.getArea();
    cout << "pizza면적은 " << area << endl;

    return 0;
}
