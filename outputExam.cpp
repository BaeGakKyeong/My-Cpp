#include <iostream>

double area(int r);

int main(){
    int n = 3;
    char c = '#';

    std::cout << "c" << 5.5 << '-' << n << "hello" << true << std::endl;
    std::cout << "n + 5 = " << n + 5 << '\n';
    std::cout << "면적은 " << area(n);  //area함수의 리턴값 출력

    return 0;
}

double area(int r){
    return 3.14 * r * r;
}