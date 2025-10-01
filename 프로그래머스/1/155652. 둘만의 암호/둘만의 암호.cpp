#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";

    for (char c : s) 
    {
        int move = 0;
        char cur = c;

        while (move < index) 
        {
            cur++;
            if (122 < cur )
            {
                cur = 97;
            }
            
            auto it = find(skip.begin(), skip.end(), cur);
            if(it == skip.end())
            {
                move++;
            }
        }
        answer += cur;
    }
    return answer;
}