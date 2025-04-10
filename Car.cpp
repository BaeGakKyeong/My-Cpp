#include <iostream>
using namespace std;

class Car{
public:     //public접근지정자를 설정해 주어야 main함수에서 맴버변수를 초기화할 수 있음.
    int speed, gear;
    string color;
    Car();
    void speedUp(int value);
    void speedDown(int value);
    void gearCheck();
    void colorCheck();
};

Car::Car(){
    cout << "자동차 제작중..." << endl;
}

void Car::speedUp(int value){    //맴버함수를 선언할 때 return타입을 반드시 선언해야 함.
    speed += value;

    cout << "속도를 " << value << " 올립니다. 현재 속도 >> " << speed << endl;
}

void Car::speedDown(int value){
    speed -= value;
    
    cout << "속도를 " << value << " 낮춥니다. 현재 속도 >> " << speed << endl;
}

void Car:: gearCheck(){
    cout << "현재 기어는 " << gear << "입니다. " << endl;
}

void Car::colorCheck(){
    cout << "자동차의 색은 " << color << "입니다." << endl;
}

int main(){
    Car myCar;

    myCar.speed = 100;
    myCar.gear = 3;
    myCar.color = "red";

    myCar.speedUp(10);
    myCar.speedDown(10);
    myCar.colorCheck();
    myCar.gearCheck();
}