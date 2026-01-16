#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    string sortnum = to_string(n);
    sort(sortnum.rbegin(), sortnum.rend());
    long long answer = stoll(sortnum);
    return answer;
}