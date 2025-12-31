#include <iostream>

using namespace std;

void SetAngle(int& angle) {
    cout << "각도를 입력해주세요(1~180):";
    cin >> angle;
    if (angle > 180 || angle <= 0)
        cout << "잘못된 각도를 입력하였습니다.";
}

int solution(int angle) {
    
    int answer;
    if (angle < 90) {
        answer = 1;
        cout << "angle이 " << angle << "이므로 예각입니다. 따라서 1을 return합니다." << endl;
    }
    else if (angle == 90) {
        answer = 2;
        cout << "angle이 " << angle << "이므로 직각입니다. 따라서 2를 return합니다." << endl;
    }
    else if (angle == 180) {
        answer = 4;
        cout << "angle이 " << angle << "이므로 평각입니다. 따라서 4를 return합니다." << endl;
    }
    else {
        answer = 3;
        cout << "angle이 " << angle << "이므로 둔각입니다. 따라서 3을 return합니다." << endl;
    }

    return answer;

}

int main() {
    int angle;
    int result;

    SetAngle(angle);
    
    solution(angle);
    solution(70);
    solution(91);
    solution(180);

}