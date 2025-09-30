#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) 
{
    vector<int> answer;
    vector<int> alphabetAccessCount;
    for(int i =0; i < 26; i++)
    {
        alphabetAccessCount.push_back(101);
    }
    
    for(int i = 0; i < keymap.size(); i++)
    {
        for(int j = 0; j < keymap[i].size(); j++)
        {
            if( j+1 <alphabetAccessCount[keymap[i][j] - 65])
            {
                alphabetAccessCount[keymap[i][j] - 65] = j+1;
            }
        }
    }
    
    for(int i =0; i < targets.size(); i++)
    {
        answer.push_back(0);
        for(int j =0; j < targets[i].size(); j++)
        {
            if(alphabetAccessCount[targets[i][j] - 65] < 101)
            {
                answer[i] += alphabetAccessCount[targets[i][j] - 65];
            }
            else
            {
                answer[i] = -1;
                break;
            }
        }
    }
    
    return answer;
}