#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food)
{
    string answer = "";
    int count = 0;
    for (int i = 0; i < food.size(); i++)
    {
        int half = food[i] / 2;
        if (0 < half)
        {
            answer.append(half, '0' + count);
        }
        count++;
    }
    answer.push_back('0');
    for (int i = food.size() - 1; 0 < i; i--)
    {
        int half = food[i] / 2; 
        count--;
        if (0 < half)
        {
            answer.append(half, '0' + count);
        } 
    }
    return answer;
}