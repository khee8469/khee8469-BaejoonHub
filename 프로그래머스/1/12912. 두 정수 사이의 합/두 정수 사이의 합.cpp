
long long solution(int a, int b) 
{
    long long answer = 0;
    
    int min;
    int max;
    
    if(a < b)
    {
        min = a;
        max = b;
    }
    else
    {
        min = b;
        max = a;
    }
    
    
    for(int i = min; min<=max; min++)
    {
        answer += min;
    }
    
    return answer;
}