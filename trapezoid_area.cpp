#include <iostream>
using namespace std;

int main(){
    int width, hight, area;

    cout << "너비를 입력하시오 >>";
    cin >> width;

    cout << "높이를 입력하시오 >>";
    cin >> hight;

    area = width * hight;

    cout << "넓이는 " << area << "입니다." << endl;

    return 0;
}