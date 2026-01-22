#include <string>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

string solution(vector<string> seoul) {
    auto it = find(seoul.begin(), seoul.end(), "Kim");
    string answer = "김서방은 " + to_string(distance(seoul.begin(), it)) + "에 있다";
    return answer;
}