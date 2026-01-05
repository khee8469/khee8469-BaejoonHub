#include <string>
#include <vector>

using namespace std;
int CharMuitNum(char c)
{
    
}
int solution(string word)
{
    int answer = 0;
    int weights[5] = { 781, 156, 31, 6, 1 };
    for (int i = 0; i < word.size(); i++)
    {
        int multiply;
        if (word[i] == 'A')
        {
            multiply = 0;
        }
        else if (word[i] == 'E')
        {
            multiply = 1;
        }
        else if (word[i] == 'I')
        {
            multiply = 2;
        }
        else if (word[i] == 'O')
        {
            multiply = 3;
        }
        else if (word[i] == 'U')
        {
            multiply = 4;
        }
        
        answer += multiply * weights[i] + 1;
    }

    return answer;
}

