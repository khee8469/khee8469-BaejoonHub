#include <vector>
#include <algorithm>

using namespace std;

int Rank(int Count);

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int min = 0;
    int zeroCount = 0;
    
    for(int lot : lottos)
    {
        if(lot == 0 )
        {
            zeroCount++;
        }
        else
        {
            auto a = find(win_nums.begin(), win_nums.end(), lot);
            if(a != win_nums.end())
            {
                min++;
            }
        }  
    }
       
    answer.push_back(Rank(min + zeroCount));
    answer.push_back(Rank(min));
    return answer;
}


int Rank(int Count)
{
    if(Count < 2)
    {
        return 6;
    }
    else
    {
        return 7-Count;
    } 
}
