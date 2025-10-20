#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s)
{
    vector<int> answer;
    int binaryTransformCount = 0;
    int ZeroDeleteCount = 0;

    string NextStr = "";
    while (s != "1")
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                ++ZeroDeleteCount;

            }
            else
            {
                NextStr += s[i];
            }
        }

        
        int Num = NextStr.size();
        s = "";
        NextStr = "";
        while (Num > 0)
        {
            s.insert(s.begin(), (Num % 2) ? '1' : '0');
            Num /= 2;
        }
        ++binaryTransformCount;
    }

    answer.push_back(binaryTransformCount);
    answer.push_back(ZeroDeleteCount);

    return answer;
}