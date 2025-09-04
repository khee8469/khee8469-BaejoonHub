#include <string>
#include <vector>

using namespace std;

string solution(string s) 
{
    string answer = "";
    int index = 0;
    for(char a : s)
    {
        if(a == ' ')
        {
            answer += " ";
            index = 0;
        }
        else if(index == 0)
        {
            answer += toupper(a);
            ++index;
        }
        else
        {
            answer += tolower(a);
            --index;
        }
    }
    return answer;
}