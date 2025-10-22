#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow)
{
    vector<int> answer;

    int CarpetSum = brown + yellow;

    for (int i = 1; i <= yellow; i++)
    {
        if (yellow % i == 0)
        {
            int YellowWidth = yellow / i;
            int YellowHeight = i;

            if ((YellowWidth + 2) * (YellowHeight + 2) == CarpetSum) //25
            {
                answer.push_back(YellowWidth + 2);
                answer.push_back(YellowHeight + 2);
                return answer;
            }
        }
    }

    return answer;
}