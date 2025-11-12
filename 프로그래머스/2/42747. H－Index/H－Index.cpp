#include <string>
#include <vector>

using namespace std;

int solution(vector<int> citations) 
{
    int answer = 0;
    int Count = 0;
    for(int i =1; i <= 10000; i++)
    {
        for(int j = 0; j < citations.size(); j++)
        {
            if(citations[j] >= i)
            {
                Count++;
            }
            if(Count > i)
            {
                Count = 0;
                break;
            }
        }
        if(Count != 0)
        {
            answer = Count;
            break;
        }
    }
    
    return answer;
}