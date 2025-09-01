
using namespace std;

long long solution(int price, int money, int count)
{
    long long sum = 0;
    long long answer = money;
    for(int i = 0; i < count; ++i)
    {
        sum += (price*(1+i));
    }
    
    if(sum < answer)
    {
        answer = 0;
    }
    else
    {
        answer -= sum;
        answer *= -1;
    }
    return answer;
}