#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int tlen = t.length();
    int plen = p.length();
    for (int i = 0; i <= tlen - plen; ++i)
    {
        string s = "";
        for (int j = i; j < i + plen; ++j)
        {
            s += t[j];
        }
        if (stoll(s) <= stoll(p))
        {
            answer++;
        }
    }
    return answer;
}