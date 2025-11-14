#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2)
{
    vector<vector<int>> answer;

    for (int i = 0; i < arr1.size(); i++)
    {
        vector<int> vec;
        answer.push_back(vec);
    }

    for (int i = 0; i < arr1.size(); i++)
    {
        for (int k = 0; k < arr2[0].size(); k++)
        {
            int sum = 0;
            for (int m = 0; m < arr1[0].size(); m++)
            {
                sum += arr1[i][m] * arr2[m][k];
            }
            answer[i].push_back(sum);
        }
    }

    return answer;
}