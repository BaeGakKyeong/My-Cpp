#include <iostream>
using namespace std;

class Circle{
public:
    int radius;
    double getArea();
};

double Circle::getArea(){
    return 3.14 * radius * radius;
}

int main(){
    Circle donut;
    donut.radius = 1;

    double area = donut.getArea();
    cout << "donut면적은 " << area << "입니다." << endl;

    Circle pizza;
    pizza.radius = 30;

    area = pizza.getArea();
    cout << "pizza면적은 " << area << "입니다." << endl;

    return 0;
}