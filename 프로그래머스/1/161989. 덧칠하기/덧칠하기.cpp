#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, int m, vector<int> section) 
{
    int answer = 0;
    int PrevNum = -n;
    
    sort(section.begin(), section.end());
    
    for(int num : section)
    {
        if(PrevNum + m-1 < num)
        {
            answer++;
            PrevNum = num;
        }
    }
    
    return answer;
}