#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int pm = 1;

    if (s[0] == '-') {
        pm = -1;
    }

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] >= '0' && s[i] <= '9') {
            answer *= 10;
            answer += s[i] - '0';
        }
    }
    answer *= pm;
    return answer;
}