#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) 
{
    string answer = "";
    for(char a : s)
    {
        if(65 <= a && a <= 90)
        {
            if(a + n <= 90)
            {
               answer += a + n;
            }
            else if (90 < a + n)
            {
                answer += a + n - 90 + 64;
            }
        }
        else if(97 <= a && a <= 122)
        {
            if(a + n <= 122)
            {
                answer += a + n;
            }
            else if(122 < a + n)
            {
                answer += a + n - 122 + 96;
            }
        }
        else
        {
            answer += ' ';
        }
    }
    return answer;
}