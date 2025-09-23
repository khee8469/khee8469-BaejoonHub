#include <string>
#include <vector>

using namespace std;

int solution(int number, int limit, int power) 
{
    int answer = 0;
    int a = 1;
    for(int i = 1; i <= number; i++)
    {
        for(int j = 1; j <= i/2; j++)
        {
            if(i%j ==0)
            {
                a++;
            }
        }
        
        if( limit < a)
        {
            answer += power;
        }
        else
        {
            answer += a;
        }
        
        a = 1;
    }
    
    return answer;
}