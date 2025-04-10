#include <iostream>
using namespace std;

class Rectangle{
    int width, hight;
public:
    Rectangle();
    Rectangle(int side);
    Rectangle(int W, int H);

    int isSquare();
};

Rectangle::Rectangle() : Rectangle(1, 1) { }

Rectangle::Rectangle(int side) : Rectangle(side, side) { }

Rectangle::Rectangle(int W, int H) : width(W), hight(H) { 
    cout << "직사각형 생성" << endl;
}

int Rectangle::isSquare(){
    if(width == hight){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    Rectangle rect1;
    Rectangle rect2(3, 5);
    Rectangle rect3(3);

    if(rect1.isSquare()){
        cout << "rect1은 정사각형이다." << endl;
    }
    if(rect2.isSquare()){
        cout << "rect2는 정사각형이다." << endl;
    }
    if(rect3.isSquare()){
        cout << "rect3는 정사각형이다." << endl;
    }

    return 0;
}