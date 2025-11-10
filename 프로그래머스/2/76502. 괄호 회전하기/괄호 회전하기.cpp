#include <string>
#include <stack>

using namespace std;

int solution(string s)
{
    int answer = 0;
    stack<char> st;
    bool Success = false;

    for (int j = 0; j < s.size(); j++)
    {
        Success = true;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '[')
            {
                st.push(s[i]);
            }
            else if (s[i] == '(')
            {
                st.push(s[i]);
            }
            else if (s[i] == '{')
            {
                st.push(s[i]);
            }
            else
            {
                if (st.size() == 0)
                {
                    Success = false;
                    break;
                }
                if (s[i] == ']')
                {
                    if (st.top() == '[')
                    {
                        st.pop();
                    }
                }
                else if (s[i] == ')')
                {
                    if (st.top() == '(')
                    {
                        st.pop();
                    }
                }
                else if (s[i] == '}')
                {
                    if (st.top() == '{')
                    {
                        st.pop();
                    }
                }
            }
        }

        if (Success && st.empty())
        {
            answer++;
        }

        char last = s.front();
        s.erase(0, 1);
        s.insert(s.end(), last);
    }

    return answer;
}