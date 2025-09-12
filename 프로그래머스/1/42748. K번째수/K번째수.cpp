#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands)
{
    vector<int> answer;

    for (vector<int> vec : commands)
    {
        vector<int> sub;
        for (int i = vec[0] - 1; i < vec[1]; i++)
        {
            sub.push_back(array[i]);
        }
        sort(sub.begin(), sub.end());
        answer.push_back(sub[vec[2]-1]);
    }
    return answer;
}