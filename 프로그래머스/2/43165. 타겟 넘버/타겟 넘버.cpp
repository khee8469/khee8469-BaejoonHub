#include <vector>

using namespace std;

int dfs(vector<int>& numbers, int index, int sum, int target)
{
    if (index == numbers.size())
    {
        if (sum == target)
        {
            return 1;
        }
        return 0;
    }

    int plus = dfs(numbers, index + 1, sum + numbers[index], target);
    int minus = dfs(numbers, index + 1, sum - numbers[index], target);

    return plus + minus;
}

int solution(vector<int> dungeons, int target) 
{
    return dfs(dungeons, 0, target, 0);
}