/* 런타임 에러가 남. 벡터 크기가 너무 커서? 배열을써서?
#include <iostream>
#include <vector>

int setNum() {
	int num;
	std::cout << "숫자를 입력해주세요(1~1000): ";
	std::cin >> num;
	if (num <= 0 || num > 1000) {
		std::cout << "잘못된 값을 입력했습니다. 다시 입력해주세요: ";
		std::cin >> num;
	}
	return num;
}

int solution(const int& num) {
	std::vector<int> vec;
	int sum = 0;

	std::cout << "n이 " << num << "이므로 0";

	for (int i = 0; i < num; i++) {
		vec.push_back(i + 1);

		if (i % 2 == 1) {
			sum += vec[i];
			std::cout << " + " << vec[i];
		}
	}
	std::cout << " = " << sum << "을 return 합니다.\n";
	return sum;
}

int main() {
	int num = setNum();
	solution(num);
	solution(10);
	solution(4);
}
*/