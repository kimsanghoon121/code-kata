#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    for (int i = 0; i < numbers.size(); ++i)
    {
        for (int j = 0; j < numbers.size(); ++j)
        {
            if (i == j) continue;

            int sol = numbers[i] + numbers[j];

            if (find(answer.begin(), answer.end(), sol) != answer.end())
            {
                continue;
            }
            answer.push_back(sol);
        }
    }
    sort(answer.begin(), answer.end());
    return answer;
}