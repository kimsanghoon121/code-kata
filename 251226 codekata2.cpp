#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2)
{
    int answer = 0;

    if (num1 == num2)
    {
        answer = 1;
    }
    else
    {
        answer = -1;
    }

    return answer;
}


void output(int num1, int num2, int result)
{
    if (result == 1)
    {
        cout << "num1이 " << num1 << "이고 num2가 " << num2 << "이므로 같습니다. 따라서 1을 return합니다." << endl;
    }
    else
    {
        cout << "num1이 " << num1 << "이고 num2가 " << num2 << "이므로 다릅니다. 따라서 -1을 return합니다." << endl;
    }
}




int main() 
{
    int num1, num2;
    int result, result2, result3;
    

    cout << "첫번째 숫자를 입력하세요(0~10000):";
    cin >> num1;
    
    if(num1<0 || num1 >10000)
    {
        cout << "잘못된 값을 입력하였습니다.";
    
    }

    else
    {
        cout << "두번째 숫자를 입력하세요(0~10000):";
        cin >> num2;
        if (num1 < 0 || num1 >10000)
        {
            cout << "잘못된 값을 입력하였습니다.";

        }

        else
        {
            result = solution(num1, num2);
            result2 = solution(11, 11);
            result3 = solution(7, 99);
            
            output(num1, num2, result);
            output(11, 11, result2);
            output(7, 99, result3);
            
        }
    }


}