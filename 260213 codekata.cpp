#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> a;
    while (n != 0)
    {
        a.push_back(n % 3);
        n /= 3;
    }
    long long power = 1;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        answer += a[i] * power;
        power *= 3;
    }

    return answer;
}