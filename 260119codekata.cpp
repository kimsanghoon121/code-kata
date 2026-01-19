#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int divide = 0;
    int value = x;
    while (x != 0)
    {
        divide += x % 10;
        x /= 10;
    }
    if (value % divide == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}