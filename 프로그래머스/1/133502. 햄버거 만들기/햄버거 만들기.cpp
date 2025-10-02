#include <vector>

using namespace std;

int solution(vector<int> ingredient)
{
    int answer = 0;

    vector<int> order;

    for (int a : ingredient)
    {
        order.push_back(a);
        if (order.size() >= 4)
        {
            if (order[order.size() - 4] == 1 && 
                order[order.size() - 3] == 2 && 
                order[order.size() - 2] == 3 && 
                order[order.size() - 1] == 1)
            {
                order.pop_back();
                order.pop_back();
                order.pop_back();
                order.pop_back();
                answer++;
            }
        }
    }

    return answer;
}