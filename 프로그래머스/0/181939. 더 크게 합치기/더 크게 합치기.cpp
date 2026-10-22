#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) 
{
    int answer = 0;
    string s1 = to_string(a) + to_string(b);
    string s2 = to_string(b) + to_string(a);
    int num1 = stoi(s1);
    int num2 = stoi(s2);
    if(num1 >= num2)
    {
        answer = num1;
    }
    else
    {
        answer = num2;
    }
    return answer;
}