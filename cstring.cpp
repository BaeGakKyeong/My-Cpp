#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char password[11];
    cout << "프로그램을 종료하려면 암호를 입력하시오." << endl;

    while(true){
        cout << "암호 >> ";
        cin >> password;

        if(strcmp(password, "password") == 0){
            cout << "프로그램 정상종료";   
            break;
        }
        else{
            cout << "암호가 틀립니다." << endl;
        }
    }

    return 0;
}