#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n)
{
    vector<long long> arr(n);

    arr[0] = x;

    for (int i = 1; i < n; ++i)
    {
		arr[i] = arr[i - 1] + x;
    }

    return arr;
}