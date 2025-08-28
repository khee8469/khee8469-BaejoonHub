#include <string>

using namespace std;

string solution(string s)
{
    string answer = "";
    const char* c = s.c_str();
    if (s.size() % 2 == 1)// 홀수
    {
        answer += *(c + (s.size() >> 1));
    }
    else //짝수
    {
        answer += *(c + (s.size() >> 1)-1);
        answer += *(c + (s.size() >> 1));
    }
    
    return answer;
}