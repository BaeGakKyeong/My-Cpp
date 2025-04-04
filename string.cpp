#include <iostream>
using namespace std;

int main(){
    cout << "이름을 입력하시오 >> ";

    char name[11];
    // char array[n]일 때, 영어의 경우 n - 1개, 한글의 경우 (n - 1) / 2개만큼의 문자를 받을 수 있음.
    cin >> name;

    cout << "이름은 " << name << "입니다.\n";

    return 0;
}