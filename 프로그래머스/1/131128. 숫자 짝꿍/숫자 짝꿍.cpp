#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string X, string Y)
{
    string answer = "";
    vector<int> NumIndex = { 0,0,0,0,0,0,0,0,0,0 };

    for (int i = 0; i < X.size(); i++)
    {
        if (NumIndex[X[i] - 48] <= Y.size())
        {
            auto it = find(Y.begin() + NumIndex[X[i] - 48], Y.end(), X[i]);
            if (it == Y.end())
            {
                continue;
            }
            else
            {
                answer += Y[it - Y.begin()];
                NumIndex[X[i] - 48] = it - Y.begin() + 1;
            }
        }
    }


    sort(answer.begin(), answer.end(), [](const char& a, const char& b) {return a > b; });
    if (answer == "")
    {
        answer = "-1";
    }
    else if(answer[0] == '0')
    {
        answer = "0";
    }

    return answer;
}