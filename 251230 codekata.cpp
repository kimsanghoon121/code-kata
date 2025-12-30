#include <iostream>
using namespace std;

void BoolNum(int num)
{
	if ((num <= 0) || (num > 100))
	{
		cout << "1~100의 값을 입력하세요.";
	}
}

void SetNum(int& num1,int& num2)
{
	cout << "첫번째 수를 입력하세요(1~100):";
	cin >> num1;
	BoolNum(num1);


	cout << "두번째 수를 입력하세요(1~100):";
	cin >> num2;
	BoolNum(num2);
}


int solution(int num1, int num2) 
{
	float divide = (float)num1 / (float)num2;
	float divide1000 = divide * 1000;
	int answer = divide1000;

	cout << "num1이 " << num1 << ", num2가 " << num2 << "이므로" << num1 << "/" << num2 << "=" << divide;
	cout << "에 1000을 곱하면 " << divide1000 << "이 되며, 정수 부분은 " << answer << "입니다."<<endl;

	return answer;
}


int main()
{
	int num1, num2;
	SetNum(num1, num2);
	solution(num1, num2);
	solution(3, 2);
	solution(7, 3);
	solution(1, 16);
}