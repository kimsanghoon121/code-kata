#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    if (arr.size() > 1) {
        int min_val = arr[0];
        int min_idx = 0;
        for (int i = 1; i < arr.size(); ++i) {
            if (arr[i] < min_val) {
                min_val = arr[i];
                min_idx = i;
            }
        }
        arr.erase(arr.begin() + min_idx);
        return arr;
    }
    else {
        return { -1 };
    }
}