#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int solution(int n, int k) 
{
    int answer = 0;

    string s;
    while (n > 0)
    {
        int r = n % k;
        s.push_back(char('0' + r));
        n = n / k;
    }
    reverse(s.begin(), s.end());

    int startIndex = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0' || i == s.size()-1 )
        {
            bool Check = true;
            int endIndex = (s[i] == '0' ? i : i + 1);
            string sub = s.substr(startIndex, endIndex - startIndex);
            if (sub.size() == 0)
            {
                continue;
            }

            long long subNum = stoll(sub);

            if (subNum == 1)
            {
                startIndex = i + 1;
                continue;
            }

            if (subNum == 2)
            {
                Check = true;
            }
            else
            {
                if (subNum % 2 == 0)
                {
                    Check = false;
                }
                else
                {
                    for (long long j = 3; j * j <= subNum; j += 2)
                    {
                        if (subNum % j == 0)
                        {
                            Check = false;
                            break;
                        }
                    }
                }
            }

            if (Check == true)
            {
                answer++;
            }

            startIndex = i + 1;
        }
    }

    return answer;
}
