#include <iostream>

using namespace std;

int solution(int num1, int num2) 
{
    int answer = num1 + num2;
    cout << "num1이 " << num1 << "이고 num2가 " << num2 << "이므로 " << num1 << "+" << num2 << "=" << answer << "를 return합니다." << endl;
    return answer;
}

int main()
{
    int num1, num2;
    
    cout << "첫번째 숫자를 입력하세요:";
    cin >> num1;

    if ((num1 < -50000) || (num1 > 50000))
    {
        cout << "-50000~50000사이의 값을 입력해야 합니다." << endl;
    }

    cout << "두번째 숫자를 입력하세요:";
    cin >> num2;
    if ((num2 < -50000) || (num2 > 50000))
    {
        cout << "-50000~50000사이의 값을 입력해야 합니다." << endl;
    }

    int result = solution(num1, num2);
    int result2 = solution(2, 3);
    int result3 = solution(100, 2);

}