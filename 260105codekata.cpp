#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double sum = 0;
    for (double num : numbers) {
        sum += num;
    }

    double answer = sum / numbers.size();
    return answer;
}