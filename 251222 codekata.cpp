#include <iostream>
using namespace std;

int solution(int num1, int num2) {

    int answer = num1 - num2;
    return answer;
}

int main()
{
    int a, b;
    cout << "a를 입력하세요:";
    cin >> a;

    if (a <= 50000 && a >= -50000) {
        cout << "a의 조건을 만족합니다." << endl;
    }
    else {
        cout << "a를 다시 입력해주세요." << endl;
        cout << "a를 입력하세요:";
        cin >> a;
    }

    cout << "b를 입력하세요:";
    cin >> b;

    if (b <= 50000 && b >= -50000) {
        cout << "b의 조건을 만족합니다." << endl;
    }
    else {
        cout << "b를 다시 입력해주세요." << endl;
        cout << "b를 입력하세요:";
        cin >> b;
    }

    int subtract = solution(a, b);


    cout << "두 수의 차:" << subtract << endl;
}