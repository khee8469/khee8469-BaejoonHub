#include <string>
#include <vector>

using namespace std;

string solution(string s)
{
    string answer = "";

    int wordStartIndex = 0;

    for (int i = 0; i < s.size(); i++)
    {        
        if (s[i] == ' ')
        {
            wordStartIndex = i + 1;
        }
        
        if (i == wordStartIndex)
        {
            answer += toupper(s[i]);
        }
        else
        {
            answer += tolower(s[i]);
        }
    }

    return answer;
}
