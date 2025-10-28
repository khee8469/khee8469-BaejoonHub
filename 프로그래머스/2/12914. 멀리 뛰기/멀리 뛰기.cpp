using namespace std;

long long solution(int n) 
{
    long long answer = 0;
    if (n == 0) return 1;
    if (n == 1) return 1;
    int a = 1;
    int b = 1;
    for (int i = 2; i <= n; ++i) 
    {
        int c = (a + b) % 1234567;
        a = b;
        b = c;
    }
    answer = b;
    return answer;
}