#include <string>
#include <vector>
#include <queue>
#include <map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount)
{
    int answer = 0;

    if (discount.size() < 10)
    {
        return 0;
    }
    bool Check;
    map<string, int> WantNumberMap;
    map<string, int> WantCountMap;
    for (int i = 0; i < want.size(); i++)
    {
        WantNumberMap[want[i]] = number[i];
        WantCountMap[want[i]] = 0;
    }

    for (int i = 0; i < discount.size() - 9; i++)
    {
        Check = true;
        for (int j = i; j < i + 10; j++)
        {
            WantCountMap[discount[j]]++;
        }

        for (auto it : WantNumberMap)
        {
            if (WantNumberMap[it.first] != WantCountMap[it.first])
            {
                Check = false;
            }
            WantCountMap[it.first] = 0;
        }
        
        if (Check)
        {
            answer++;
        }
    }

    return answer;
}

//일정한 금액을 지불하면 10일 동안 회원 자격을 부여
//매일 한 가지 제품을 할인하는데  행사
//할인하는 제품은 하루에 하나씩만 구매할 수 있습니다
//10일간 모두 살수 있는 날 개수 리턴, 없으면 0  