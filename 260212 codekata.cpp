#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int lcm = m * n;
    while (m != 0) {
        int temp = m;
        m = n % m;
        n = temp;
    }
    int gcd = n;
    lcm /= n;
    answer.push_back(gcd);
    answer.push_back(lcm);
    return answer;
}