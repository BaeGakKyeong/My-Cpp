#include <iostream>
using namespace std;

class Ractangle{
public:
    int width, hight;
    int rectArea();
};

int Ractangle::rectArea(){
    return width * hight;
}

int main(){
    Ractangle rect;
    rect.width = 3;
    rect.hight = 5;

    cout << "사각형의 면적은" << rect.rectArea() << endl;

    return 0;
}