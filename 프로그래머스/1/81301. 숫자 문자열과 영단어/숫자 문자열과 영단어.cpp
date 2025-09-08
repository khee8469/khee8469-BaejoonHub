#include <string>

using namespace std;

int solution(string s)
{
    string words[10] = { "zero","one","two","three","four","five","six","seven","eight","nine" };
    for (int i = 0; i < 10; ++i)
    {
        while (string::npos != s.find(words[i]))
        {
            int index = s.find(words[i]);
            s.replace(index, words[i].size(), to_string(i));
        }
    }

    return stoi(s);
}