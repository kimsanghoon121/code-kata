#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    vector<int> column;
    //if(arr1.size()!=arr2.size()) return 0;
    //if(arr1[0].size()!=arr2[0].size()) return 0;

    for (int i = 0; i < arr1.size(); ++i)
    {
        for (int j = 0; j < arr1[0].size(); ++j)
        {
            column.push_back(arr1[i][j] + arr2[i][j]);
        }
        answer.push_back(column);
        column.clear();
    }
    return answer;
}