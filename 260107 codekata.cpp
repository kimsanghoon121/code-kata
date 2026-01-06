#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double sum = 0;
    for (double num : arr) {
        sum += num;
    }

    double answer = sum / arr.size();
    return answer;
}