#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    if (s.length() == 4 || s.length() == 6)
    {
        for (auto ch : s)
        {
            if (!isdigit(ch)) return false;
        }
        return true;
    }
    else return false;
}