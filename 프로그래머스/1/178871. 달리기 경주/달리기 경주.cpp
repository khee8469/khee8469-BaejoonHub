#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings)
{
    vector<string> answer;
    map<string, int> rank;

    for (string player : players)
    {
        answer.push_back(player);
    }
    
    int index = 0;
    for (string player : players)
    {
        rank.emplace(make_pair(player, index));
        index++;
    }

    for (string call : callings)
    {
        auto callIt = rank.find(call); 
        int callIndex = callIt->second;

        if (callIndex != 0)
        {

            string keyTemp = answer[callIndex - 1];
            answer[callIndex - 1] = answer[callIndex];
            answer[callIndex] = keyTemp;

            auto it = rank.find(keyTemp);
            int valueIndex = it->second;
            it->second = callIndex;
            callIt->second = valueIndex;
        }

    }

    return answer;
}
