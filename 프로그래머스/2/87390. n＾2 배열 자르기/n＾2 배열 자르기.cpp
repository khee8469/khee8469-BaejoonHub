#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right)
{
    vector<int> answer;

    for (long long i = left; i <= right; i++)
    {
        int a = i / n;
        int b = i % n;
        answer.push_back(max(a + 1, b + 1));
    }

    return answer;
}