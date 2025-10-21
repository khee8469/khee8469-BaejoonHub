#include <vector>

using namespace std;

int solution(int n)
{
    int answer;
    unsigned long long Prev2Num = 0;
    unsigned long long Prev1Num = 1;

    for (int i = 2; i <= n; i++)
    {
        unsigned long long SumNum = 0;

        SumNum = Prev2Num + Prev1Num;
        Prev2Num = Prev1Num% 1234567;
        Prev1Num = SumNum% 1234567;
    }

    answer = Prev1Num % 1234567;
    return answer;
}
