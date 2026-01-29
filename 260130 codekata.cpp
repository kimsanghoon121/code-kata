#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int index = s.size();
    if (index % 2 == 0)
    {
        answer += s[index / 2 - 1];
        answer += s[index / 2];
    }
    if (index % 2 != 0)
    {
        answer = s[(index / 2)];
    }
    return answer;
}