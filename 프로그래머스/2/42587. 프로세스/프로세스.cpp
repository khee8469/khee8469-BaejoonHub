#include <string>
#include <vector>
#include <queue>
#include <map>

using namespace std;

int solution(vector<int> priorities, int location) 
{
    int answer = 0;
    queue<pair<int, int>> q;

    for (int i = 0; i < priorities.size(); i++) 
    {
        q.push({ priorities[i], i });
    }

    while (!q.empty()) 
    {
        auto current = q.front();
        q.pop();

        bool hasHigher = false;
        for (int p : priorities) 
        {
            if (p > current.first) 
            {
                hasHigher = true;
                break;
            }
        }

        if (hasHigher) 
        {
            q.push(current);
        }
        else 
        {
            answer++;

            if (current.second == location)
            {
                return answer;
            }

            priorities[current.second] = 0;
        }
    }

    return answer;
}