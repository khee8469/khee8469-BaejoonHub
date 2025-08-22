#include <string>

using namespace std;

int solution(string s)
{
    int answer = 0;
	int multiplier = 1;
    for (int i = 0; i < s.size(); ++i)
    {
        if (i == 0)
        {
            answer += (s[s.size() - 1 - i] - '0');
        }
        else
        {
            if (s[s.size() - 1 - i] == '+')
            {
                return answer;
            }
            else if (s[s.size() - 1 - i] == '-')
            {
                return answer *= -1;
            }
			multiplier *= 10;
			answer += (s[s.size() - 1 - i] - '0') * multiplier;
        }
    }

    return answer;
}