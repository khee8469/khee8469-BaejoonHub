#include <string>
#include <vector>
#include <algorithm>

std::vector<int> solution(int k, std::vector<int> scores)
{
    std::vector<int> answer;
    std::vector<int> sortScore;
    for (int score : scores)
    {
        sortScore.push_back(score);
        sort(sortScore.begin(), sortScore.end(), [](const int& a, const int& b) { return a > b; });

        if (sortScore.size() < k)
        {
            answer.push_back(sortScore[sortScore.size()-1]);
        }
        else
        {
            answer.push_back(sortScore[k - 1]);
        }
    }
    return answer;
}