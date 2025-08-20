int solution(int n) 
{
    int answer = 0;
	int nHalf = n / 2;
    for (int i = 1; i <= nHalf; ++i)
    {
        if (n % i == 0)
        {
            answer += i;
		}
    }
	answer += n;

    return answer;
}