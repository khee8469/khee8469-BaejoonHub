#include <vector>
#include <unordered_set>

using namespace std;

int solution(vector<int> elements)
{
    int answer = 0;
    unordered_set<int> SumSet;

    for (int i = 1; i <= elements.size(); i++)  // 수열 길이
    {
        for (int j = 0; j < elements.size(); j++)  // 수열 시작 인덱스
        {
            int Count = 0;
            int Sum = 0;
            while (Count < i)
            {
                if (j + Count >= elements.size())
                {
                    Sum += elements[j + Count - elements.size()];
                }
                else
                {
                    Sum += elements[j + Count];
                }
                
                Count++;
            }

            SumSet.insert(Sum);
        }
    }

    answer = SumSet.size();

    return answer;
}