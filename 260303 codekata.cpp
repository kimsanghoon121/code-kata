#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for (auto chars : s)
    {
        if (isspace(chars))
        {
            answer += chars;
            continue;
        }

        for (int i = 1; i <= n; ++i)
        {
            if (chars == 'z' || chars == 'Z')
            {
                chars -= 25;
            }
            else {
                chars++;
            }
        }
        answer += chars;
    }

    return answer;
}