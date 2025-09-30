#include <string>
#include <vector>

using namespace std;

int solution(string s) 
{ 
    int answer = 0;
    
    while(0 < s.size())
    {
        char x = s[0];
        int xCount = 0;
        int otherCount = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(x == s[i])
            {
                xCount++;
            }
            else
            {
                otherCount++;
            }
            
            if(xCount == otherCount)
            {
                answer++;              
                s = s.substr(i+1, s.size() - i+1);
                break;
            }
            else if( i+1 == s.size())
            {
                return ++answer;
            }
        }
    }
    
    return answer;
}