#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) 
{
    vector<int> answer;
    
    for(int i =0; i < progresses.size(); i++)
    {
        int SuccessProgressesCount = 1;
        int remainderValue = 100-progresses[i];
        int remainderDay;
        if( remainderValue % speeds[i] == 0)
        {
            remainderDay = remainderValue / speeds[i];
        }
        else
        {
            remainderDay = (remainderValue / speeds[i]) + 1;
        }
        
        // i프로그램 뒤에 몇개까지 완료 됐는가
        for(int j = i+1; j< progresses.size(); j++)
        {
            int SumValue = progresses[j] + speeds[j] * remainderDay;
            
            if(SumValue >= 100)
            {
                SuccessProgressesCount++;
                i++;
            }
            else
            {
                break;
            }
        }
        
        answer.push_back(SuccessProgressesCount);
    }
    
    
    return answer;
}