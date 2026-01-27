#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 45;
    int sum = 0;
    for (int a : numbers)
    {
        sum += a;
    }
    answer -= sum;
    return answer;
}