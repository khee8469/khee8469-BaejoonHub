#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies)
{
    vector<int> answer;

    int todayYear = stoi(today.substr(0, 4));
    int todayMon = stoi(today.substr(5, 2));
    int todayDay = stoi(today.substr(8, 2));

    for (string term : terms)
    {
        string data = term.substr(0,1);
        int durationMon = stoi(term.substr(2, term.size()));

        for(int i = 0; i < privacies.size(); i++)
        {
            if (privacies[i].back() == data[0])
            {
                int priYear = stoi(privacies[i].substr(0, 4));
                int priMon = stoi(privacies[i].substr(5, 2));
                int priDay = stoi(privacies[i].substr(8, 2));


                if (priMon + durationMon > 12)
                {
                    priYear += (priMon + durationMon - 1 ) / 12;
                    priMon = (priMon + durationMon - 1) % 12 + 1;
                }
                else
                {
                    priMon += durationMon;
                }

                if (priYear < todayYear)
                {
                    answer.push_back(i+1);
                }
                else if (priYear == todayYear)
                {
                    if (priMon < todayMon)
                    {
                        answer.push_back(i+1);
                    }
                    else if (priMon == todayMon)
                    {
                        if (priDay <= todayDay)
                        {
                            answer.push_back(i+1);
                        }
                    }
                }
            }
        }
    }
    sort(answer.begin(), answer.end());
    return answer;
}