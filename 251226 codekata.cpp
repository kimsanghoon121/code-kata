#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int age) 
{
    int answer = 2023-age;
    return answer;
}

void output(int age, int year)
{
    int age2022 = age;
    int result = year;

    cout << "2022년 기준 " << age2022 << "살이므로" << result << "년생입니다." << endl;

    return;
}


int main()
{
    int age2022;
    cout << "22년도의 나이를 입력하세요: ";
    cin >> age2022;

    if (age2022<=0 || age2022>120)
    {
        cout << "잘못된 나이값을 입력하였습니다.";
    }

    else
    {
        int result = solution(age2022);
        int result1 = solution(40);
        int result2 = solution(23);

        output(age2022, result);

        output(40, result1);

        output(23, result2);
    }

}