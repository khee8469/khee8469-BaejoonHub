#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) 
{
    int answer = 1;
    
    map<string, int> ClothTypeCount;
    
    for(int i = 0; i<clothes.size(); i++)
    {
        ClothTypeCount[clothes[i][1]] ++;
    }

    for (auto& it : ClothTypeCount)
    {
        answer *= (it.second + 1);
    }
    
    return answer-1;
}