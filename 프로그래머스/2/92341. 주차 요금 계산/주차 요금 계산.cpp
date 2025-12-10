#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<int> fees, vector<string> records) 
{
    vector<int> answer;

    map<int, int> CarTimeSum;
    map<int, int> CarInTime;

    for (int i = 0; i < records.size(); i++)
    {
        int Hour = stoi(records[i].substr(0, 2));
        int Minute = stoi(records[i].substr(3, 2));
        int Time = Hour * 60 + Minute;
        int CarNumber = stoi(records[i].substr(6, 5));
        string InOut = records[i].substr(11);


        if (InOut == "IN")
        {
            CarInTime[CarNumber] = Time;
        }
        else if(InOut == "OUT")
        {
            CarTimeSum[CarNumber] = CarTimeSum[CarNumber] + (Time - CarInTime[CarNumber]);
            CarInTime[CarNumber] = -1;
        }
    }

    for (auto it : CarInTime)
    {
        if (it.second != -1)
        {
            CarTimeSum[it.first] = CarTimeSum[it.first] + 1439 - it.second;
        }

        if (CarTimeSum[it.first] <= fees[0])
        {
            answer.push_back(fees[1]);
        }
        else
        {
            if ((CarTimeSum[it.first] - fees[0]) % fees[2] == 0)
            {
                answer.push_back((CarTimeSum[it.first] - fees[0]) / fees[2] * fees[3] + fees[1]);
            }
            else
            {
                answer.push_back(((CarTimeSum[it.first] - fees[0]) / fees[2] + 1) * fees[3] + fees[1]);
            }
        }
    }

    return answer;
}