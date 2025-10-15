#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k)
{
    vector<int> answer;
    vector<int> count;

    for (int i = 0; i < id_list.size(); i++)
    {
        answer.push_back(0);
        count.push_back(0);
    }

    map<string, map<string, bool>> userReports;
    for (int i = 0; i < id_list.size(); i++)
    {
        map<string, bool> userReport;
        for (int j = 0; j < id_list.size(); j++)
        {
            userReport[id_list[j]] = false;
        }

        userReports[id_list[i]] = userReport;
    }

    for (const string& str : report)
    {
        auto it = find(str.begin(), str.end(), ' ');
        string reporterName = str.substr(0, it - str.begin());
        string reportedName = str.substr(it - str.begin() + 1);

        userReports[reporterName][reportedName] = true;
    }

    for (int i = 0; i < id_list.size(); i++)
    {
        map<string, bool> userReport = userReports[id_list[i]];

        for (int j = 0; j < id_list.size(); j++)
        {
            if (userReport[id_list[j]])
            {
                count[j] += 1;
            }
        }
    }

    for (int i =0; i<count.size(); i++)
    {
        if (count[i] >= k)
        {
            for (int j = 0; j < count.size(); j++)
            {
                if (userReports[id_list[j]][id_list[i]])
                {
                    answer[j] += 1;
                }
            }
        }
    }

    return answer;
}