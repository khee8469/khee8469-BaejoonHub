#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling)
{
    int answer = 0;
    string prev = "";
    bool check = false;
    bool succed = false;
    vector<string> words = { "aya", "ye", "woo", "ma" };

    for (string babu : babbling)
    {
        prev = "";
        succed = true;
        for (int i = 0; i < babu.size();)
        {
            check = false;
            for (string word : words)
            {
                if (babu.substr(i, word.size()) == word && prev != word)
                {
                    prev = word;
                    i += word.size();
                    check = true;
                    break;
                }
            }
            if (!check)
            {
                succed = false;
                break;
            }
        }
        if (succed)
        {
            answer++;
        }
    }

    return answer;
}