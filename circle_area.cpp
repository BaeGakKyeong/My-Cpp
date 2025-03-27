#include <iostream>

double area(int r){
    return 3.14 * r * r;
}

int main(){
    int radius = 5;

    std::cout << "5 + radius = " << 5 + radius << std::endl;
    std::cout << "지름이 " << radius << "인 원의 면적은 " << area(radius) << "입니다." << std::endl;

    return 0;
}