#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve)
{
    int answer = 0;
    int lostNum = lost.size();
    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());

    for (int i = 0; i < reserve.size(); i++)
    {
        for (int j = 0; j < lost.size(); j++)
        {
            if (reserve[i] == lost[j])
            {
                reserve[i] = 0;
                lost[j] = 0;
                lostNum--;
                break;
            }
        }
    }

    for (int i = 0; i < reserve.size(); i++)
    {
        if (reserve[i] == 0) continue;
        for (int j = 0; j < lost.size(); j++)
        {
            if (lost[j] == 0) continue;
            if (reserve[i] - 1 <= lost[j] && lost[j] <= reserve[i] + 1) 
            {
                reserve[i] = 0;
                lost[j] = 0;
                lostNum--;
                break;
            }
        }
    }

    answer = n - lostNum;

    cout << answer << endl;

    return answer;
}