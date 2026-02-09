#include <iostream>
using namespace std;

int solution(int num1, int num2) {
    int answer = num1 * num2;
    return answer;
}

int main() {
    int a, b;
    cin >> a >> b;
    int result = solution(a, b);

    if (a < 0 || b < 0 || a > 100 || b > 100)
    {
        cout << "0~100 사이의 값을 입력해주세요" << endl;
        cin >> a >> b;
    }
    else {
        
        cout << "Result: " << result << endl;
    }

    int result1 = solution(3, 4);
    int result2 = solution(27, 19);

    cout << "Result 1: " << result1 << endl;
    cout << "Result 2: " << result2 << endl;
}