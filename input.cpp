#include <iostream>
using namespace std;

int main(){
    cout << "너비를 입력하세요 >> ";

    int width;
    cin >> width;

    cout << "높이를 입력하시오 >> ";

    int hight;
    cin >> hight;       //cin >> width >> hight; 도 가능

    int area = hight * width;
    cout << "면적은 " << area << endl;

    return 0;
}