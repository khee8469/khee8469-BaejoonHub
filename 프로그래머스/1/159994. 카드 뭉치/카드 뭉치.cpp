#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> cards1,
    vector<string> cards2, vector<string> goal)
{
    int cards1Index = 0;
    int cards2Index = 0;

    for (string word : goal)
    {
        if (cards1[cards1Index] == word)
        {
            ++cards1Index;
        }
        else if (cards2[cards2Index] == word)
        {
            ++cards2Index;
        }
        else
        {
            return "No";
        }
    }

    return "Yes";
}

