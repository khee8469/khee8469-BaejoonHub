#include <iostream>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 0;
    int Round = 1;
    
    while(a != 0)
    {
        if( a % 2 != 0)
        {
            if(a+1 == b)
            {
                return Round;
            }
        }
        else
        {
            if(a-1 ==b)
            {
                return Round;
            }
        }
        
        if (a % 2 == 0)
            a /= 2;
        else
            a = (a + 1) / 2;
        
        if (b % 2 == 0)
            b /= 2;
        else
            b = (b + 1) / 2;
        
        ++Round;
    }
    


    return answer;
}