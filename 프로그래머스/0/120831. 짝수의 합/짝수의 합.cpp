int solution(int n) 
{
    int sum = 0;
    for(int i = 2; i <= n; ++i)
    {
        if(i % 2 == 0) // 나머지가 없음
        {
            sum += i;
        }
    }
    
    return sum;
}